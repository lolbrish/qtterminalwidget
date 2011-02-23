/* -*-mode:java; c-basic-offset:2; -*- */
/* JCTermSwingFrame
 * Copyright (C) 2002,2007 ymnk, JCraft,Inc.
 *  
 * Written by: ymnk<ymnk@jcaft.com>
 *   
 *   
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License
 * as published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
   
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU Library General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

package com.jcraft.jcterm;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;

public class JCTermSwingFrame extends JFrame implements ActionListener,
    Runnable{
  static String COPYRIGHT="JCTerm 0.0.9\nCopyright (C) 2002,2007 ymnk<ymnk@jcraft.com>, JCraft,Inc.\n"
      +"Official Homepage: http://www.jcraft.com/jcterm/\n"
      +"This software is licensed under GNU LGPL.";

  private String proxy_http_host=null;
  private int proxy_http_port=0;

  private String proxy_socks5_host=null;
  private int proxy_socks5_port=0;

  private JSchSession jschsession=null;
  // private Proxy proxy=null;

  private int compression=0;

  private Splash splash=null;

  private JCTermSwing term=null;

  private Connection connection=null;

  public JCTermSwingFrame(){
  }

  public JCTermSwingFrame(String name){
    super(name);

    enableEvents(AWTEvent.KEY_EVENT_MASK);
    addWindowListener(new WindowAdapter(){
      public void windowClosing(WindowEvent e){
        System.exit(0);
      }
    });

    JMenuBar mb=getJMenuBar();
    setJMenuBar(mb);

    term=new JCTermSwing();
    getContentPane().add("Center", term);
    pack();
    term.setVisible(true);

    ComponentListener l=new ComponentListener(){
      public void componentHidden(ComponentEvent e){
      }

      public void componentMoved(ComponentEvent e){
      }

      public void componentResized(ComponentEvent e){
        System.out.println(e);
        Component c=e.getComponent();
        int cw=c.getWidth();
        int ch=c.getHeight();
        int cwm=(c.getWidth()-((JFrame)c).getContentPane().getWidth());
        int chm=(c.getHeight()-((JFrame)c).getContentPane().getHeight());
        cw-=cwm;
        ch-=chm;
        JCTermSwingFrame.this.term.setSize(cw, ch);
      }

      public void componentShown(ComponentEvent e){
      }
    };
    addComponentListener(l);

    openSession();
  }

  private Thread thread=null;

  public void kick(){
    this.thread=new Thread(this);
    this.thread.start();
  }

  public void run(){
    while(thread!=null){
      try{
	jschsession = new JSchSession(JSchSession.createSession());

        Channel channel=null;
        OutputStream out=null;
        InputStream in=null;

	channel = jschsession.getSession().openChannel();
	out=channel.getOutputStream();
	in=channel.getInputStream();
	channel.connect();

        final OutputStream fout=out;
        final InputStream fin=in;
        final Channel fchannel=channel;

        connection=new Connection(){
          public InputStream getInputStream(){
            return fin;
          }

          public OutputStream getOutputStream(){
            return fout;
          }

          public void requestResize(Term term){
	    int c=term.getColumnCount();
	    int r=term.getRowCount();
	    fchannel.setPtySize(c, r, c*term.getCharWidth(),
				r*term.getCharHeight());
          }

          public void close(){
            fchannel.disconnect();
          }
        };
        setTitle("title");
        term.requestFocus();
        term.start(connection);
      }
      catch(Exception e){
        //e.printStackTrace();
      }
      break;
    }
    setTitle("JCTerm");
    thread=null;
  }

  public void setLineSpace(int foo){
    term.setLineSpace(foo);
  }

  public void setSplash(Splash foo){
    this.splash=foo;
  }

  public boolean getAntiAliasing(){
    return term.getAntiAliasing();
  }

  public void setAntiAliasing(boolean foo){
    term.setAntiAliasing(foo);
  }

  public void openSession(){
    kick();
  }

  public void actionPerformed(ActionEvent e){
    String action=e.getActionCommand();
    if(action.equals("Open SHELL Session...")){
      if(thread==null){
        openSession();
      }
    }
    else if((action.equals("AntiAliasing"))){
      setAntiAliasing(!getAntiAliasing());
    }
    else if(action.equals("Compression...")){
      String foo=JOptionPane
          .showInputDialog(
              this,
              "Compression level(0-9)\n0 means no compression.\n1 means fast.\n9 means slow, but best.",
              new Integer(compression).toString());
      try{
        if(foo!=null){
          compression=Integer.parseInt(foo);
        }
      }
      catch(Exception ee){
      }
    }
    else if(action.equals("About...")){
      JOptionPane.showMessageDialog(this, COPYRIGHT);
      return;
    }
    else if(action.equals("Quit")){
      quit();
    }
  }

  public JMenuBar getJMenuBar(){
    JMenuBar mb=new JMenuBar();
    JMenu m;
    JMenuItem mi;

    m=new JMenu("File");
    mi=new JMenuItem("Open SHELL Session...");
    mi.addActionListener(this);
    mi.setActionCommand("Open SHELL Session...");
    m.add(mi);
    mi=new JMenuItem("Quit");
    mi.addActionListener(this);
    mi.setActionCommand("Quit");
    m.add(mi);
    mb.add(m);

    m=new JMenu("Etc");
    mi=new JMenuItem("AntiAliasing");
    mi.addActionListener(this);
    mi.setActionCommand("AntiAliasing");
    m.add(mi);
    mi=new JMenuItem("Compression...");
    mi.addActionListener(this);
    mi.setActionCommand("Compression...");
    m.add(mi);
    mb.add(m);

    m=new JMenu("Help");
    mi=new JMenuItem("About...");
    mi.addActionListener(this);
    mi.setActionCommand("About...");
    m.add(mi);
    mb.add(m);

    return mb;
  }

  public void quit(){
    thread=null;
    if(connection!=null){
      connection.close();
      connection=null;
    }
    if(jschsession!=null){
      jschsession.dispose();
      jschsession=null;
    }
    System.exit(0);
  }

  public void setTerm(JCTermSwing term){
    this.term=term;
  }

  public Term getTerm(){
    return term;
  }

  public static void main(String[] arg){
    final JCTermSwingFrame frame=new JCTermSwingFrame("JCTerm");
    frame.setVisible(true);
    frame.setResizable(true);
  }
}

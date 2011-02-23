package com.jcraft.jcterm;

import java.io.*;

public class Channel {
    OutputStream os;
    InputStream is;

    public Channel(InputStream is, OutputStream os) {
	this.is = is;
	this.os = os;
    }

    public OutputStream getOutputStream() {
	System.out.println("Channel.getOutputStream");
	return this.os;
    }

    public InputStream getInputStream() {
	System.out.println("Channel.getInputStream");
	return this.is;
    }

    public void connect() {
	System.out.println("Channel.connect");
    }

    public void disconnect() {
	System.out.println("Channel.disconnect");
    }

    public void setPtySize(int c, int r, int pixelWidth, int pixelHeight) {
	System.out.println("Channel.setPtySize");
    }
}
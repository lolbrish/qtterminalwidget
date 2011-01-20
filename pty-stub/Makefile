
qt:
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./fromucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./qt.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldiscucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./localenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./logging.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./macenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./mimeenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./minibidi.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./misc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcsdat.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./settings.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./slookup.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./terminal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./time.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./timing.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./toucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./tree234.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./utf8.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxmisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxprint.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpty.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsel.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsignal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxstore.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c `cat ./version.def` -c ./version.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./wcwidth.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xkeysym.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmptcfg.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./new.c
	cc -o pterm new.o fromucs.o qt.o ldisc.o ldiscucs.o localenc.o logging.o macenc.o mimeenc.o minibidi.o misc.o sbcs.o sbcsdat.o settings.o slookup.o terminal.o time.o timing.o toucs.o tree234.o utf8.o uxmisc.o uxprint.o uxpterm.o uxpty.o uxsel.o uxsignal.o uxstore.o uxucs.o version.o wcwidth.o xenc.o xkeysym.o xpmptcfg.o xpmpterm.o  -pthread -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lpangoft2-1.0 -lgdk_pixbuf-2.0 -lm -lpangocairo-1.0 -lcairo -lgio-2.0 -lpango-1.0 -lfreetype -lfontconfig -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lglib-2.0 -lX11 -ldl


assert:
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./fromucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./assert.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldiscucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./localenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./logging.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./macenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./mimeenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./minibidi.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./misc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcsdat.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./settings.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./slookup.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./terminal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./time.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./timing.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./toucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./tree234.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./utf8.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxmisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxprint.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpty.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsel.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsignal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxstore.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c `cat ./version.def` -c ./version.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./wcwidth.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xkeysym.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmptcfg.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./new.c
	cc -o pterm new.o fromucs.o assert.o ldisc.o ldiscucs.o localenc.o logging.o macenc.o mimeenc.o minibidi.o misc.o sbcs.o sbcsdat.o settings.o slookup.o terminal.o time.o timing.o toucs.o tree234.o utf8.o uxmisc.o uxprint.o uxpterm.o uxpty.o uxsel.o uxsignal.o uxstore.o uxucs.o version.o wcwidth.o xenc.o xkeysym.o xpmptcfg.o xpmpterm.o  -pthread -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lpangoft2-1.0 -lgdk_pixbuf-2.0 -lm -lpangocairo-1.0 -lcairo -lgio-2.0 -lpango-1.0 -lfreetype -lfontconfig -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lglib-2.0 -lX11 -ldl


null:
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./fromucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./null.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldiscucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./localenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./logging.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./macenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./mimeenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./minibidi.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./misc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcsdat.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./settings.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./slookup.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./terminal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./time.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./timing.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./toucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./tree234.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./utf8.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxmisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxprint.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpty.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsel.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsignal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxstore.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c `cat ./version.def` -c ./version.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./wcwidth.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xkeysym.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmptcfg.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./new.c
	cc -o pterm new.o fromucs.o null.o ldisc.o ldiscucs.o localenc.o logging.o macenc.o mimeenc.o minibidi.o misc.o sbcs.o sbcsdat.o settings.o slookup.o terminal.o time.o timing.o toucs.o tree234.o utf8.o uxmisc.o uxprint.o uxpterm.o uxpty.o uxsel.o uxsignal.o uxstore.o uxucs.o version.o wcwidth.o xenc.o xkeysym.o xpmptcfg.o xpmpterm.o  -pthread -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lpangoft2-1.0 -lgdk_pixbuf-2.0 -lm -lpangocairo-1.0 -lcairo -lgio-2.0 -lpango-1.0 -lfreetype -lfontconfig -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lglib-2.0 -lX11 -ldl

gtk:
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./fromucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -I/usr/include/gtk-2.0 -I/usr/lib/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -c ./gtkcols.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -I/usr/include/gtk-2.0 -I/usr/lib/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -c ./gtkfont.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -I/usr/include/gtk-2.0 -I/usr/lib/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -c ./gtkwin.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./ldiscucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./localenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./logging.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./macenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./mimeenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./minibidi.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./misc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./sbcsdat.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./settings.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./slookup.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./terminal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./time.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./timing.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./toucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./tree234.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./utf8.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxmisc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxprint.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxpty.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsel.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxsignal.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxstore.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./uxucs.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c `cat ./version.def` -c ./version.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./wcwidth.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xenc.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xkeysym.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmptcfg.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./xpmpterm.c
	cc -O2 -Wall -Werror -g -D _FILE_OFFSET_BITS=64 -I./charset/ -I./unix/ -I./ -pthread -c ./new.c
	cc -o pterm new.o fromucs.o gtkcols.o gtkfont.o gtkwin.o ldisc.o ldiscucs.o localenc.o logging.o macenc.o mimeenc.o minibidi.o misc.o sbcs.o sbcsdat.o settings.o slookup.o terminal.o time.o timing.o toucs.o tree234.o utf8.o uxmisc.o uxprint.o uxpterm.o uxpty.o uxsel.o uxsignal.o uxstore.o uxucs.o version.o wcwidth.o xenc.o xkeysym.o xpmptcfg.o xpmpterm.o  -pthread -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lpangoft2-1.0 -lgdk_pixbuf-2.0 -lm -lpangocairo-1.0 -lcairo -lgio-2.0 -lpango-1.0 -lfreetype -lfontconfig -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lglib-2.0 -lX11 -ldl

clean:
	rm -rf *.o *~ pterm

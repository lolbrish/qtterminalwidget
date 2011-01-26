
project(qtterm)
cmake_minimum_required(VERSION 2.8)
#find_package(Qt4 REQUIRED)
find_package(PkgConfig)

#include(${QT_USE_FILE})

# QtTerm
SET(CMAKE_BUILD_TYPE Debug)

#set(qtterm_sources
#  src/Main.cpp
#  src/pty/)

#set(qtterm_moc_classes
#  src/QTerminalWidget.h)

set(pty_charset_headers
  src/pty/charset.h
  src/pty/internal.h)

set(pty_unix_headers
  src/pty/gtkcols.h
  src/pty/gtkfont.h
  src/pty/unix.h)

set(pty_headers
  src/pty/int64.h
  src/pty/network.h
  src/pty/puttyps.h
  src/pty/terminal.h
  src/pty/ldisc.h
  src/pty/putty.h
  src/pty/resource.h
  src/pty/tree234.h
  src/pty/misc.h
  src/pty/puttymem.h
  src/pty/storage.h
  src/pty/uxconfig.h)

set(pty_shared_source
  src/pty/fromucs.c
  src/pty/ldisc.c
  src/pty/ldiscucs.c
  src/pty/localenc.c
  src/pty/logging.c
  src/pty/macenc.c
  src/pty/mimeenc.c
  src/pty/minibidi.c
  src/pty/misc.c
  src/pty/sbcs.c
  src/pty/sbcsdat.c
  src/pty/settings.c
  src/pty/slookup.c
  src/pty/terminal.c
  src/pty/time.c
  src/pty/timing.c
  src/pty/toucs.c
  src/pty/tree234.c
  src/pty/utf8.c
  src/pty/uxmisc.c
  src/pty/uxprint.c
  src/pty/uxpterm.c
  src/pty/uxpty.c
  src/pty/uxsel.c
  src/pty/uxsignal.c
  src/pty/uxstore.c
  src/pty/uxucs.c
  src/pty/version.c
  src/pty/wcwidth.c
  src/pty/xenc.c
  src/pty/xkeysym.c
  src/pty/xpmptcfg.c
  src/pty/xpmpterm.c
  src/pty/new.c)

set(pty_gtk_source
  src/pty/gtkcols.c
  src/pty/gtkfont.c
  src/pty/gtkwin.c)

#QT_WRAP_CPP(qtterm qtterm_moc_files ${qtterm_moc_classes})
#add_executable(qtterm ${qtterm_sources} ${qtterm_moc_files})
#target_link_libraries(qtterm ${QT_LIBRARIES})
SET(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Werror -D _FILE_OFFSET_BITS=64")
SET(CMAKE_CXX_FLAGS_RELEASE "-O2 -Wall -Werror -D _FILE_OFFSET_BITS=64")

FIND_PACKAGE(GTK2 COMPONENTS gtk)
INCLUDE_DIRECTORIES(${GTK2_INCLUDE_DIRS})
ADD_EXECUTABLE(gtkpterm 
  ${pty_charset_headers}
  ${pty_unix_headers}
  ${pty_headers} 
  ${pty_shared_source}
  ${pty_gtk_source}
  ${GTK2_LIBRARIES})
TARGET_LINK_LIBRARIES(gtkpterm ${GTK2_LIBRARIES})

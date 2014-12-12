AM_MAKEFLAGS = --no-print-directory

noinst_LTLIBRARIES =
includedir = @includedir@/conmgr

AM_CFLAGS = $(WARNING_CFLAGS) $(MISC_CFLAGS)
AM_LDFLAGS = $(MISC_LDFLAGS)

noinst_LTLIBRARIES += gdbus/libgdbus-internal.la

gdbus_libgdbus_internal_la_SOURCES = gdbus/gdbus.h \
					gdbus/mainloop.c gdbus/watch.c \
					gdbus/object.c gdbus/client.c gdbus/polkit.c

bin_PROGRAMS = src/conmgrd
src_conmgrd_SOURCES = src/conmgr.h src/main.c src/conmgr_dbus.c
src_conmgrd_LDADD = gdbus/libgdbus-internal.la $(builtin_libadd) \
					@GLIB_LIBS@ @DBUS_LIBS@ \
					-lresolv -ldl -lrt
src_conmgrd_DEPENDENCIES = gdbus/libgdbus-internal.la
src_conmgrd_LDFLAGS = -Wl,--export-dynamic 

AM_CFLAGS += @DBUS_CFLAGS@ @GLIB_CFLAGS@


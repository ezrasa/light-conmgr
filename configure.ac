AC_PREREQ([2.60])
AC_INIT([conmgr], [0.1] )
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])

AM_MAINTAINER_MODE
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects 
				  color-tests silent-rules])

AC_PREFIX_DEFAULT(/usr/local)
PKG_PROG_PKG_CONFIG
COMPILER_FLAGS

# Checks for programs.
AC_PROG_CC
# AC_PROG_CC_PIE
AM_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_MKDIR_P
AC_LANG_C
AC_DISABLE_STATIC
#AC_PROG_LIBTOOL
AM_PROG_AR
LT_INIT

AC_ARG_ENABLE(optimization, AC_HELP_STRING([--disable-optimization],
			  [disable code optimization through compiler]), [
			   if (test "${enableval}" = "no"); then
				   CFLAGS="$CFLAGS -O0 -U_FORTIFY_SOURCE"
			   fi  
])

AC_ARG_ENABLE(debug, AC_HELP_STRING([--enable-debug],
			  [enable compiling with debugging information]), [
			   if (test "${enableval}" = "yes" &&
				   test "${ac_cv_prog_cc_g}" = "yes"); then
			   CFLAGS="$CFLAGS -g"
		   fi  
])

# Checks for libraries.
AC_CHECK_LIB(dl, dlopen, dummy=yes, 
			 AC_MSG_ERROR(dynamic linking loader is required))

PKG_CHECK_MODULES(GLIB, glib-2.0 >= 2.28, dummy=yes, 
				  AC_MSG_ERROR(GLib >= 2.28 is required))
AC_SUBST(GLIB_CFLAGS)
AC_SUBST(GLIB_LIBS)

PKG_CHECK_MODULES(DBUS, dbus-1 >= 1.4, dummy=yes,
                  AC_MSG_ERROR(D-Bus >= 1.4 is required))
AC_SUBST(DBUS_CFLAGS)
AC_SUBST(DBUS_LIBS)

#if (test "${enable_wifi}" != "no"); then
#	AC_PATH_PROG(WPASUPPLICANT, [wpa_supplicant], [], $PATH:/sbin:/usr/sbin)
#fi

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT

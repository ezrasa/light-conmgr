/*
 * conmgr_dbus.c
 */

#include <string.h>
#include <errno.h>
// #include "gdbus/gdbus.h"
#include "conmgr_dbus.h"

static DBusConnection *connection = NULL;

int conmgr_dbus_init(DBusConnection *conn)
{
	// DBG("");

	connection = conn;

	return 0;
}

void conmgr_dbus_cleanup(void)
{
	// DBG("");

	connection = NULL;
}

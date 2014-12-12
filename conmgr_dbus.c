/*
 * conmgr_dbus.c
 *
 *  Created on: Dec 12, 2014
 *      Author: zhxihu
 */

#include <string.h>
#include <errno.h>
#include "gdbus/gdbus.h"

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

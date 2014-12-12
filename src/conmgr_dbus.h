/*
 * conmgr_dbus.h
 */

#ifndef CONMGR_INCLUDE_CONMGR_DBUS_H_
#define CONMGR_INCLUDE_CONMGR_DBUS_H_

#define CONMGR_SERVICE			"net.conmgr"
#define CONMGR_PATH			"/net/conmgr"

#include <dbus/dbus.h>

int conmgr_dbus_init(DBusConnection *conn);
void conmgr_dbus_cleanup(void);


#endif /* CONMGR_INCLUDE_CONMGR_DBUS_H_ */

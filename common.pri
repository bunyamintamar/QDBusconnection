QT              -=  gui
QT              +=  core dbus

CONFIG          +=  c++17 console
CONFIG          -=  app_bundle

BASEDIR         =   $$PWD
DBUS_INTERFACES +=  $$BASEDIR/chat.xml
DBUS_ADAPTORS   +=  $$BASEDIR/chat.xml

INCLUDEPATH     +=  $$BASEDIR

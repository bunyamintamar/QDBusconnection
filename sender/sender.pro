include(../common.pri)

QT              +=  widgets

TARGET          =   Sender
HEADERS         +=  $$files("*.h",   false)
SOURCES         +=  $$files("*.cpp", false)
FORMS           +=  $$files("*.ui",  false)

OBJECTS_DIR     =   $$BASEDIR/BUILD/$$TARGET/others
MOC_DIR         =   $$BASEDIR/BUILD/$$TARGET/others
RCC_DIR         =   $$BASEDIR/BUILD/$$TARGET/others
UI_DIR          =   $$BASEDIR/BUILD/$$TARGET/others
DESTDIR         =   $$BASEDIR/BUILD/$$TARGET

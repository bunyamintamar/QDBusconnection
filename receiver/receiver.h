/****************************************************************************
** Bunyamin TAMAR
** bunyamintamar@yandex.com
** https://www.linkedin.com/in/bunyamintamar
****************************************************************************/

#ifndef RECEIVER_H
#define RECEIVER_H

#include "ui_receiver.h"
#include <QtDBus/QDBusConnection>

class Receiver : public QWidget
{
    Q_OBJECT

public:
    Receiver();

public slots:
    void message(QString text);

private:
    Ui::Receiver ui;
};

#endif // RECEIVER_H

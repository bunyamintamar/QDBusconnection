/****************************************************************************
** Bunyamin TAMAR
** bunyamintamar@yandex.com
** https://www.linkedin.com/in/bunyamintamar
****************************************************************************/

#ifndef SENDER_H
#define SENDER_H

#include "ui_sender.h"
#include "chat_interface.h"

using namespace org::dbus;

class Sender : public QWidget
{
    Q_OBJECT

public:
    Sender(QWidget *parent = 0);

private:
    void timerEvent(QTimerEvent *event);

private slots:
    void on_red_clicked();
    void on_blue_clicked();

private:
    Ui::Sender ui;
    Chat *chat;
};

#endif


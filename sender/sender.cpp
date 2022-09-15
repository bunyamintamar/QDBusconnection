#include <QtWidgets>

#include "sender.h"
#include "chat_interface.h"

Sender::Sender(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    chat = new Chat("organization.department", "/room1", QDBusConnection::sessionBus(), this);
    startTimer(1000);
}

void Sender::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);

    if (chat->isValid())
        ui.label->setText("connected");
    else
        ui.label->setText("disconnected");
}

void Sender::on_red_clicked()
{
    chat->message("red");
}

void Sender::on_blue_clicked()
{
    chat->message("blue");
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Sender sender;
    sender.show();
    return app.exec();
}

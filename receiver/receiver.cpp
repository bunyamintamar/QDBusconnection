#include <QtWidgets>

#include "receiver.h"
#include "chat_adaptor.h"

Receiver::Receiver()
{
    ui.setupUi(this);
    startTimer(1000);
}

void Receiver::message(QString text)
{
    ui.colorPressed->setText(text);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Receiver *receiver = new Receiver();

    new ChatAdaptor(receiver);
    QDBusConnection connection = QDBusConnection::sessionBus();
    connection.registerService("organization.department");
    connection.registerObject("/room1", receiver);

    receiver->show();

    return app.exec();
}


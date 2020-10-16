#include "servertest.h"
#include <QLocalSocket>
#include "localserver.h"

serverTest::serverTest(){

    mSocket= new QLocalSocket(this);

    mLocalServer= new LocalServer(this);
}


void serverTest::enlazar(QString algo){

    mLocalServer->listen(algo);
    mSocket->connectToServer(algo);
}
void serverTest::cerrar(){

    mLocalServer->close();
    mSocket->close();
}



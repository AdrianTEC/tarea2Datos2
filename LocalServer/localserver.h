#pragma once

#include <QLocalServer>

class QLocalSocket;

class LocalServer : public QLocalServer
{
    Q_OBJECT
public:
    explicit LocalServer(QObject *parent = nullptr);
    void envia(const QString &msj);
    void conectar();
private:
    QLocalSocket *mSocket;
};



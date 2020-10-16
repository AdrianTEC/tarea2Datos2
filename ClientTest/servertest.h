#ifndef SERVERTEST_H
#define SERVERTEST_H
#include <QWidget>
class QLocalSocket;
class LocalServer;
namespace Ui {
class Widget;
}
class serverTest: public QWidget
{
      Q_OBJECT
public:
    QLocalSocket *mSocket;
    LocalServer *mLocalServer;

    void enlazar(QString algo);
    void cerrar();
    explicit serverTest( );
private:

};

#endif // SERVERTEST_H

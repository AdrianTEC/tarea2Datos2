#include <gtest/gtest.h>
#include "DoubleList.hpp"
#include <iostream>
#include<cstdio>
#include <QLocalSocket>
#include "localserver.h"
#include "servertest.h"
#include <QApplication>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);


    ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}

struct SocketTest: testing::Test {
    serverTest* myServer ;
    SocketTest() {
        myServer = new serverTest();
    }

};
TEST_F(SocketTest , Conectar){
         int random=rand()%10000;
         QString  algo= QString::number(random);

         myServer->enlazar(algo);
         bool servidor = myServer->mLocalServer->isListening();
         myServer->cerrar();
         EXPECT_EQ(servidor,true);
    }
TEST_F(SocketTest , EnviarMsg){
         int random=rand()%10000;
         QString  algo= QString::number(random);
         myServer->enlazar(algo);
         myServer->mLocalServer->envia("hola");
         QString  mensaje= myServer->mSocket->readAll();
         bool servidor= mensaje=="";
         myServer->cerrar();
         EXPECT_EQ(servidor,true);
    }

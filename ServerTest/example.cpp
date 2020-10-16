#include <gtest/gtest.h>
#include "DoubleList.hpp"

#include <iostream>
#include<cstdio>
#include "servertest.h"
#include <QApplication>
#include "FloydWarshall.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}

/////////////////////////////////////////////////////////////
struct ListTest : testing::Test {
    DoubleList<int> * testList;
    ListTest() {
        testList = new DoubleList<int>;
    }

};
TEST_F(ListTest, ListStartsEmpty) {
    EXPECT_EQ(0, testList->getLen());
}

TEST_F(ListTest, ListHasNohead) {
    // as in this test no element has been added, the list should have nothing as index 0.
    EXPECT_ANY_THROW(testList->get(0));
}

TEST_F(ListTest, ListInsertion) {
    int b = 5;
    testList->add(b);
    EXPECT_NO_THROW(testList->get(0));
}

TEST_F(ListTest, ListReturnsCorrectValue) {
    int a = 2;
    testList->add(a);
    EXPECT_EQ(2, * testList->get(0));
}
TEST_F(ListTest, ListSecondInsertion) {
    int a = 2;
    int b = 10;
    testList->add(a);
    testList->add(b);
    EXPECT_EQ(10, * testList->get(1));
}

TEST_F(ListTest, ListDeleteElement) {
    int a = 2;
    int b = 10;
    testList->add(a);
    testList->add(b);
    int c = 15;
    testList->add(c);
    // at this point we should have 3 elements in the list structure
    int tempLength = testList->getLen();
    testList->erase(tempLength - 1); //this should remove the last element from the list
    EXPECT_EQ(tempLength - 1, testList->getLen());
}

TEST_F(ListTest, ElementValueChanging) {
    int a = 15;
    testList->add(a);
    int c = 10;
    testList->set(0, c);
    EXPECT_EQ(10, * testList->get(0));
}
/////////////////////////////////////////////////////////////
//new test fixture for graphs
struct GraphTest : testing::Test {
    Grafo<int> * testGraph;
    GraphTest() {
        testGraph = new Grafo<int>;
    }
};
TEST_F(GraphTest, GraphStartsEmpty) {
    EXPECT_ANY_THROW(testGraph->getNode(0));
    //this should throw an exception as there is no node in the graph yet.
}
TEST_F(GraphTest, GraphAddNode) {
    int a = 1;
    EXPECT_NO_THROW(testGraph->AddNode(a));
}
TEST_F(GraphTest, NodeSavedCorrectly) {
    int a = 1;
    testGraph->AddNode(a);
    EXPECT_EQ(a, * testGraph->getNode(0));
}
TEST_F(GraphTest, connection) {
    int a = 1;
    int b = 2;
    testGraph->AddNode(a);
    testGraph->AddNode(b);
    testGraph->fixRelationShip(0,1,10);
    double *algo=testGraph->getRelations()->get(0)->get(1);
    EXPECT_EQ(*algo,10.0);
}
TEST_F(GraphTest, Floyd) {
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;
    testGraph->AddNode(a);
    testGraph->AddNode(b);
    testGraph->AddNode(c);
    testGraph->AddNode(d);
    testGraph->AddNode(e);
    testGraph->fixRelationShip(a,b, 1);
    testGraph->fixRelationShip(b,c, 120);
    testGraph->fixRelationShip(c,d, 130);


    DoubleList<DoubleList<double>>* algo=testGraph->getRelations();
    DoubleList<int>*  resultado ;
    resultado= getPath(Floyd(*algo),a,d);
    QString res ="";
    for(int i =0; i< resultado->getLen();i++)
    {
        res+= QString::number(*resultado->get(i));
        res+="-";
    }

    EXPECT_TRUE(res.compare("0-2-3"));
}
/////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////


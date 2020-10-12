#include <gtest/gtest.h>
#include "DoubleList.hpp"
#include "Grafo.hpp"
#include <iostream>
#include<cstdio>
int main(int argc, char *argv[])
{

    ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
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

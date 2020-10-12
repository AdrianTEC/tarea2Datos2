#include <gtest/gtest.h>
#include "DoubleList.hpp"
#include <iostream>
#include<cstdio>
int main(int argc, char *argv[])
{

    ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}


TEST(myFirtsTest , ListaDoblesConInsercion )
    {
              DoubleList<int>* miListaHiperEspecial= new DoubleList<int>;
              int prueba = 12;
              miListaHiperEspecial->add(prueba);

              EXPECT_EQ(*miListaHiperEspecial->get(0),12);
    }

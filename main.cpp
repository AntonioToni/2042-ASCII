#include "header.hpp"
#include <cstdio>

int main()
{
    srand(time(0));
    Board b;
    b.zero();
    b.generate();
    b.generate();
    /*while(b.ingame)
    {

    }*/
    b.print();
    system("pause");
}
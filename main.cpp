#include "header.hpp"

int main()
{
    srand(time(0));
    Board b;
    b.zero();
    b.generate();
    b.generate();
    char ch = NULL;
    while (b.checkingame())
    {
        b.print();
        ch = getch();
        if (ch == 'a')
        {
            b.moveleft();
        }
        else if (ch == 'w')
        {
            b.moveup();
        }
        else if (ch == 's')
        {
            b.movedown();
        }
        b.generate();
        b.generate();
    }
    b.print();
    system("pause");
}
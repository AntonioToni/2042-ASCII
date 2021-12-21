#include "functions.cpp"

int main()
{
    srand(time(0));
    Board b;
    b.zero();
    b.generate();
    b.generate();
    char ch = NULL;
    while(b.checkingame())
    {
        b.print();
        ch = getch();
        if(ch == 'a')
        {
            b.moveleft();
        }
        else if(ch == 'w')
        {
            b.moveup();
        }
        b.generate();
        b.generate();
    }
    b.print();
    system("pause");
}
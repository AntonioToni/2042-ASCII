#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

class Board
{
    public:
        int **matrix;
        bool ingame;
        Board(); //constructor declaration
        ~Board(); //destructor declaration
        void zero();
        void print();
        void generate();
        bool checkingame();
        bool checkmove();
        //controls
        void moveleft();
        void moveup();
        void movedown();
        void moveright();
};
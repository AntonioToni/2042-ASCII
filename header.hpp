#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

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
};
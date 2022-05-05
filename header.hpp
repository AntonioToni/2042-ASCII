#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

class Board
{
    private:
        int score = 0;
        int end = FALSE;
        int **matrix;
        bool ingame;
    public:
        Board(); //constructor declaration
        ~Board(); //destructor declaration
        void zero();
        void print();
        void generate();
        bool checkingame();
        bool checkmove();
        bool checkmovepossible(char ch);
        bool checkwinlose();
        bool winscreen();
        void losescreen();
        //controls
        void moveleft();
        void moveup();
        void movedown();
        void moveright();
};

void ShowConsoleCursor(bool showFlag);
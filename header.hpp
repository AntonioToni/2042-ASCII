#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Board
{
    public:
        int **matrix;
        Board(); //constructor declaration
        ~Board(); //destructor
        void print();
};



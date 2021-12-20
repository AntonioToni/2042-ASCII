#include "header.hpp"

Board::Board() //constructor
{
    matrix = new int*[4]; //4 rows
    for (int i = 0; i < 4; i++)
    {
        matrix[i] = new int[4]; //4 cols
    }
}

Board::~Board()
{
    for (int i = 0; i < 4; i++)
    {
        delete matrix[i];
    }
    delete matrix;
}

void Board::print()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout << endl << endl; //double so it's bigger
    }
}

void Board::zero()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void Board::generate()
{
    int rnd = rand() % 5;
    int x;
    int y;
    do
    {
        x = rand() % 4;
        y = rand() % 4;
    } while (matrix[x][y] != 0);
    
    if (rnd <= 3)
    {
        matrix[x][y] = 2;
    }
    else
    {
        matrix[x][y] = 4;
    }
}
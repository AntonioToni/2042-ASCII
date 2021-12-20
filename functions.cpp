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
        for (int j = 0; i < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl << endl; //double so it's bigger
    }
}

void Board::null()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            matrix[i][j] = 0;
        }
    }
}
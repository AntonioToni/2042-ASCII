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
    system("CLS");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl << endl << endl << endl;
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

bool Board::checkingame()
{
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    if (cnt == 0)
    {
        if (checkmove() == FALSE)
        {
            return FALSE;
        }
    }
    return TRUE;
}

bool Board::checkmove()
{
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][j] == matrix[i-1][j] || matrix[i][j] == matrix[i][j-1] || matrix[i][j] == matrix[i+1][j] || matrix[i][j] == matrix[i][j+1])
                {
                    return TRUE;
                }
            }
        }
    }
    if (matrix[0][0] == matrix[1][0] != 0 || matrix[0][0] == matrix[0][1] != 0)
    {
        return TRUE;
    }
    else if(matrix[3][0] == matrix[2][0] != 0 || matrix[3][0] == matrix[3][1] != 0)
    {
        return TRUE;
    }
    else if(matrix[3][3] == matrix[2][3] != 0 || matrix[3][3] == matrix[3][2] != 0)
    {
        return TRUE;
    }
    else if(matrix[0][3] == matrix[1][3] != 0 || matrix[0][3] == matrix[0][2] != 0)
    {
        return TRUE;
    }
    return FALSE;
}

void Board::moveleft()
{
    int jj;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (matrix[i][j] != 0)
            {
                jj = j;
                while(jj != 0)
                {
                    if(matrix[i][jj-1] == matrix[i][jj])
                    {
                        matrix[i][jj-1] = (matrix[i][jj] * 2);
                        matrix[i][jj] = 0;
                        break;
                    }
                    else if(matrix[i][jj-1] == 0)
                    {
                        matrix[i][jj-1] = matrix[i][jj];
                        matrix[i][jj] = 0;
                        jj--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}

void Board::moveright()
{
    int jj;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            if (matrix[i][j] != 0)
            {
                jj = j;
                while(jj != 3)
                {
                    if(matrix[i][jj+1] == matrix[i][jj])
                    {
                        matrix[i][jj+1] = (matrix[i][jj] * 2);
                        matrix[i][jj] = 0;
                        break;
                    }
                    else if(matrix[i][jj+1] == 0)
                    {
                        matrix[i][jj+1] = matrix[i][jj];
                        matrix[i][jj] = 0;
                        jj++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}


void Board::moveup()
{
    int ii;
    for (int i = 1; i < 4; i++) //rows
    {
        for (int j = 0; j < 4; j++) //cols
        {
            if (matrix[i][j] != 0)
            {
                ii = i;
                while(ii != 0)
                {
                    if(matrix[ii-1][j] == matrix[ii][j])
                    {
                        matrix[ii-1][j] = (matrix[ii][j] * 2);
                        matrix[ii][j] = 0;
                        break;
                    }
                    else if(matrix[ii-1][j] == 0)
                    {
                        matrix[ii-1][j] = matrix[ii][j];
                        matrix[ii][j] = 0;
                        ii--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}

void Board::movedown()
{
    int ii;
    for (int i = 3; i >= 0; i--) //rows
    {
        for (int j = 0; j < 4; j++) //cols
        {
            if (matrix[i][j] != 0)
            {
                ii = i;
                while(ii != 3)
                {
                    if(matrix[ii+1][j] == matrix[ii][j])
                    {
                        matrix[ii+1][j] = (matrix[ii][j] * 2);
                        matrix[ii][j] = 0;
                        break;
                    }
                    else if(matrix[ii+1][j] == 0)
                    {
                        matrix[ii+1][j] = matrix[ii][j];
                        matrix[ii][j] = 0;
                        ii++;
                        Sleep(200);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
}
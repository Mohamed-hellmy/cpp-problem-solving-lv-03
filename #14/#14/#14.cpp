#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cstdio>

using namespace std;

void PrintArray(int Matrix[3][3], short Rows, short Cols)
{
    cout << "Random Mtrix: " << "\n";

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("  %0*d  ", 2, Matrix[i][j]);
        }
        cout << endl;
    }
}

bool IsScalar(int Matrix[3][3], short Rows, short Cols)
{
    short FirstDiagValue = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix[i][j] != FirstDiagValue)
            {
                    return false;  
            }
            else if (i != j && Matrix[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return true;
}


int main()
{
    //int Matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int Matrix[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
    cout << "Matrix: " << endl;
    PrintArray(Matrix, 3, 3);
    if (IsScalar(Matrix, 3, 3))
    {
        cout << "Scalar Matrix";
    }
    else
    {
        cout << "NOT Scalar Matrix";

    }
}

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cstdio>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }


}


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


bool IsTypical(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return false;
            }
        }
    }

    return true;

}

int main()
{
    srand(time(0));
    int Matrix1[3][3], Matrix2[3][3];
    FillArrayWithRandomNumbers(Matrix1, 3, 3);
    FillArrayWithRandomNumbers(Matrix2, 3, 3);

    cout << "Matrix 1: " << endl;
    PrintArray(Matrix1, 3, 3);
    cout << "Matrix 2: " << endl;
    PrintArray(Matrix2, 3, 3);

    if (IsTypical(Matrix1, Matrix2, 3, 3))
    {
       cout << "Matrices Is Typical" << endl;

    }
    else
    {
        cout << "Matrices NOT Typical" << endl;

    }

}


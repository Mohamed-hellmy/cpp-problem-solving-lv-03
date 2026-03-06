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

int SumMatrix(int Matrix[3][3], short Rows, short Colms)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            Sum += Matrix[i][j];

        }

    }

    return Sum;

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

void IsEqual(int Matrix1[3][3], int Matrix2[3][3])
{
    int SumMatrix1 = SumMatrix(Matrix1, 3, 3);
    int SumMatrix2 = SumMatrix(Matrix2, 3, 3);

    if (SumMatrix1 == SumMatrix2)
    {
        cout << "Matrices Are Equal"<< endl;
    }
    else
    {
        cout << "Matrices Are NOT Equal" << endl;

    }

}



int main()
{
    srand(time(0));
    int Matrix1[3][3], Matrix2[3][3];
    FillArrayWithRandomNumbers(Matrix1, 3, 3);
    FillArrayWithRandomNumbers(Matrix2, 3, 3);

    cout << "Matri 1: " << "\n";
    PrintArray(Matrix1, 3, 3);
    cout << "Matri 2: " << "\n";
    PrintArray(Matrix2, 3, 3);

    IsEqual(Matrix1, Matrix2);





    return 0;
}

 
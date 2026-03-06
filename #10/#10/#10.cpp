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



int main()
{
    srand((unsigned)time(0));
    int Matrix[3][3];
    FillArrayWithRandomNumbers(Matrix, 3, 3);
    PrintArray(Matrix, 3, 3);
    cout << "\nSum Of Matrix = " << SumMatrix(Matrix, 3, 3);   
}


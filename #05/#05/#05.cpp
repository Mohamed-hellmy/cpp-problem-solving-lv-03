#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}


int SumColumn(int arr[3][3], short Rows, short Cols, int ColIndex)
{
    int sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        sum += arr[i][ColIndex];
    }
    return sum;
}

void SumColumns(int arr[3][3], short Rows, short Cols, int ColmsSumMatrix[3])
{
    for (int j = 0; j < Cols; j++)
    {
        ColmsSumMatrix[j] = SumColumn(arr, Rows, Cols, j);
    }
}



void PrintComsMatrixSum(int ColmsSumMatrix[3], short Cols)
{
    cout << "Column Sums: " << endl;
    for (int j = 0; j < Cols; j++)
    {
        cout << "Column " << j + 1 << ": " << ColmsSumMatrix[j] << endl;
    }
}

void PrintArray(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
        cout << endl;
    }
}




int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
	int ColmsSumMatrix[3] = {0, 0, 0};

    FillArrayWithRandomNumbers(arr, 3, 3);
    cout << "Generated Random 3*3 Matrix: " << endl;
    PrintArray(arr, 3, 3);
    SumColumns(arr, 3, 3, ColmsSumMatrix);
    PrintComsMatrixSum(ColmsSumMatrix, 3);

	return 0;
}


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
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintArray(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void MultiplyMatrices(int Matrix1[3][3], int Matrix2[3][3], int MultiplyMatrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
                MultiplyMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
	int Matrix1[3][3];
	int Matrix2[3][3];
	int MultiplyMatrix[3][3];

	FillArrayWithRandomNumbers(Matrix1, 3, 3);
	FillArrayWithRandomNumbers(Matrix2, 3, 3);

	cout << "Matrix 1:" << endl;
	PrintArray(Matrix1, 3, 3);
	cout << "Matrix 2:" << endl;
    PrintArray(Matrix2, 3, 3);
	cout << "Multiply Matrix:" << endl;
	MultiplyMatrices(Matrix1, Matrix2, MultiplyMatrix, 3, 3);
	PrintArray(MultiplyMatrix, 3, 3);


	return 0;
}


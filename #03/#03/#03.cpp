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


int SumRows(int arr[3][3], short Cols, int RowIndex)
{
    int sum = 0;
    for (int j = 0; j < Cols; j++)
    {
        sum += arr[RowIndex][j];
    }
    return sum;
}

void SumRowsMatrix(int arr[3][3], short Cols, int RowIndex, int SumRowArr[3])
{
    for (int i = 0; i < 3; i++)
    {
        SumRowArr[i] = SumRows(arr, Cols, i);
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

void PrintSumRows(int arr[3][3], short Rows, short Cols, int SumRowArr[3])
{
    cout << "\nThe Following Sum Of Each Row: " << "\n";

    for (int i = 0; i < Rows; i++)
    {
        cout << "Sum Of Row " << i + 1 << " = " << SumRowArr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int SumRowArr[3] = {0, 0, 0};

    FillArrayWithRandomNumbers(arr, 3, 3);
	cout << "The Following Matrix is 3*3 Random Matrix: " << "\n";

    SumRowsMatrix(arr, 3, 3, SumRowArr);
    PrintArray(arr, 3, 3);
    PrintSumRows(arr, 3, 3, SumRowArr);
}


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

void PrintColumnSums(int arr[3][3], short Rows, short Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        int sum = SumColumn(arr, Rows, Cols, j);
        cout << "Sum of column " << j + 1 << ": " << sum << endl;
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
	FillArrayWithRandomNumbers(arr, 3, 3);
    cout << "Generated 3*3 Random Array:" << endl;
    PrintArray(arr, 3, 3);
    cout << endl;
    PrintColumnSums(arr, 3, 3);
	return 0;
}

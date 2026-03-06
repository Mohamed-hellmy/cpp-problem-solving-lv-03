#include <iostream>
#include <iomanip>

using namespace std;

void FillArrayWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
    short Counter = 1;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = Counter++;
        }
    }
}

void PrintOriginalArray(int arr[3][3], short Rows, short Cols)
{
    cout << "Original Array:" << endl;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout  << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void PrintTransposedArray(int arr[3][3], short Rows, short Cols)
{
	cout << "Transposed Array:" << endl;
    for (short i = 0; i < Cols; i++)
    {
        for (short j = 0; j < Rows; j++)
        {
            cout << setw(4) << arr[j][i] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int arr[3][3];
    FillArrayWithOrderedNumbers(arr, 3, 3);
	PrintOriginalArray(arr, 3, 3);
	PrintTransposedArray(arr, 3, 3);




}
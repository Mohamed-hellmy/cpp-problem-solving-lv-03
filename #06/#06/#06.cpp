#include <iostream>

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

void PrintArray(int arr[3][3], short Rows, short Cols)
{
	cout << "Array elements: " << endl;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
	int arr[3][3];
    FillArrayWithOrderedNumbers(arr, 3, 3);
	PrintArray(arr, 3, 3);
    
    

}


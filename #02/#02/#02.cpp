#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    // Fill the array with random numbers between 1 and 100.
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
		    arr[i][j] = RandomNumber(1, 100);

        }
    }
}

void PrintArray(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
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


void PrintSumRows(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        int sum = SumRows(arr, Cols, i);
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
}



int main()
{
    srand((unsigned)time(NULL));
	int arr[3][3];
    FillArrayWithRandomNumbers(arr, 3, 3);
	cout << "The array is: " << endl;
    PrintArray(arr, 3, 3);
	cout << "The sum of each row is: " << endl;
    PrintSumRows(arr, 3, 3);
	return 0;
   
}


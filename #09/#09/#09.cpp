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
			printf("  %0*d  ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

void PrintMiddleColmn(int arr[3][3], short Rows, short Cols)
{
	cout << "Middle Column: " << endl;
	for (short i = 0; i < Rows; i++)
    {
        printf("  %0*d  ", 2, arr[i][Cols / 2]);
    }
	cout << endl;
}


void PrintMiddleRow(int arr[3][3], short Rows, short Cols)
{
    cout << "Middle Row: " << endl;
    for (short j = 0; j < Cols; j++)
    {
        printf("  %0*d  ", 2, arr[Rows / 2][j]);
    }
	cout << endl;

}

int main()
{
    srand((unsigned)time(0));
    int RandomArry[3][3];
    FillArrayWithRandomNumbers(RandomArry, 3, 3);
	cout << "The Random Array: " << endl;
	PrintArray(RandomArry, 3, 3);
	PrintMiddleRow(RandomArry, 3, 3);
	PrintMiddleColmn(RandomArry, 3, 3);

    
	return 0;
    
}


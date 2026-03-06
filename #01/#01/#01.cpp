#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  
}


void FillArrayWithRandomNumbers(int arr[3][3], short Raws, short Cols)
{
 
    for (int i = 0; i < Raws; i++) {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);

        }
    }
        
}


void PrintArray(int arr[3][3], short Raws, short Cols)
{
    for (int i = 0; i < Raws; i++) {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}


int main()
{
    
    srand((unsigned)time(NULL));

    int arr[3][3];
    FillArrayWithRandomNumbers(arr, 3, 3);
	cout << "The array 3*3 is: " << endl;
    PrintArray(arr, 3, 3);
    return 0;
}

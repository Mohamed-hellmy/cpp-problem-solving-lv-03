#include <iostream>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << "\n";
    }
}

int MaxNumberInArray(int Matrix[3][3], int Rows, int Colms)
{
    int Max = 0;  // Initialize Max to 0. (Note: This assumes array elements are positive.)

    // Loop through the array to find the maximum element.
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            Matrix[i][j];

            if (Matrix[i][j] > Max)
            {
                Max = Matrix[i][j];
            }
        }
        // If the current element is greater than the current Max, update Max.
        
    }
    return Max;  // Return the maximum number found.
}

int MinNumberInArray(int Matrix[3][3], int Rows, int Colms)
{
    int Min = Matrix[0][0];  // Initialize Min with the first element of the array.

    // Loop through the array to find the smallest element.
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            Matrix[i][j];

            if (Matrix[i][j] < Min)
            {
                Min = Matrix[i][j];
            }

        }
        
    }
    return Min;  // Return the minimum value found.
}


int main()
{
    int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };

    cout << "Matrix Is: " << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "Max Number Is: " << MaxNumberInArray(Matrix1, 3, 3);

    cout << "\nMin Number Is: " << MinNumberInArray(Matrix1, 3, 3);

}


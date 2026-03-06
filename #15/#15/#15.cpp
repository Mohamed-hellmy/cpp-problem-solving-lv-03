#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cstdio>

using namespace std;

void PrintArray(int Matrix[3][3], short Rows, short Cols)
{
    cout << "Random Mtrix: " << "\n";

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("  %0*d  ", 2, Matrix[i][j]);
        }
        cout << endl;
    }
}

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int TimesRepeated(int& Number, int Matrix[3][3], short Rows, short Cols)
{
    int count = 0;
    for (int i = 0; i <= Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Number == Matrix[i][j])
            {
                count++;
            }

        }

    }
    return count;
}





int main()
{
    int Matrix[3][3] = { {9,1,12},{0,9,1},{0,9,9} };
    //int Matrix[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
    cout << "Matrix: " << endl;
    PrintArray(Matrix, 3, 3);
    int Number = ReadPositiveNumber("Enter A Number To Count: ");
    cout << "Number is " << Number << " appears " << TimesRepeated(Number, Matrix, 3, 3) << " Times";
}

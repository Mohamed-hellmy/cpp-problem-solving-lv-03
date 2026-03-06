#include <iostream>
#include <iomanip>
using namespace std;

void PrintArray(int Matrix[3][3], short Rows, short Cols)
{
    cout << "Random Mtrix: " << "\n";

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix[i][j] ;
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
    } while (Number < 0);

    return Number;
}

bool IsExist(int& Number, int Matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i <= Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Number == Matrix[i][j])
            {
                return true;
            }
        }
    
    }

    return false;

}

int main()
{
    int Matrix[3][3] = { {9,1,7},{0,9,1},{0,9,9} };

    cout << "Matrix Is: " << endl;
    PrintArray(Matrix, 3, 3);

    int Number = ReadPositiveNumber("Enter Number To Check: ");

    if (IsExist(Number, Matrix, 3, 3))
    {
        cout << "YES: Number To Check is " << Number << " Exist " ;

    }
    else
    {
        cout << "NO: Number To Check is " << Number << " NOT Exist ";

    }
    

}


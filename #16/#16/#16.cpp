#include <iostream>
 using namespace std;

 void PrintArray(int Matrix[3][3], short Rows, short Colms)
 {
     cout << "Random Mtrix: " << "\n";

     for (short i = 0; i < Rows; i++)
     {
         for (short j = 0; j < Colms; j++)
         {
             printf("  %0*d  ", 2, Matrix[i][j]);
         }
         cout << endl;
     }
 }

 bool IsSparce(int Matrix[3][3], short Rows, short Colms)
 {
    short ZeroCounter = 0;
    short NumbersCounter = 0;

     for (short i = 0; i < Rows; i++)
     {
         for (short j = 0; j < Colms; j++)
         {
             if (Matrix[i][j] == 0)
             {
                ++ZeroCounter ;
             }
             else
             {
                 ++NumbersCounter;
             }
         }
         
     }

     if (ZeroCounter > NumbersCounter)
     {
        return true;
     }
     else
     {
        return false;
     }

 }




int main()
{
    //int Matrix[3][3] = { {9,1,12},{0,9,1},{0,9,9} };
    //int Matrix[3][3] = { {1,0,0},{3,0,0},{6,0,0} };
    int Matrix[3][3] = { {0,0,12},{9,9,1},{0,0,9} };

    cout << "Matrix 1: " << endl;
    PrintArray(Matrix, 3, 3);
    if (IsSparce(Matrix, 3, 3))
    {
        cout << "The Matrix Is Sparce";

    }
    else
    {
        cout << "The Matrix NOT Sparce";
    }
    
}


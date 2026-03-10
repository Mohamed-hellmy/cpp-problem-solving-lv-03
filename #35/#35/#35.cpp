#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadText()
{
    string Text;  

    cout << "Please enter Text: "; 
    getline(cin, Text);              

    return Text; 
}

void PrintEachWordInString(string Sentence)
{
    string Word = "";
     
    cout << "Word: " << endl;

    for (int i = 0; i < Sentence.length(); i++)
    {
        if (Sentence[i] != ' ')
        {
            Word += Sentence[i];
        }
        else
        {
            if (Word != "")
            {
                cout << Word << "\n";
                Word = "";
            }
        }
    }


    if (Word != "")
    {
        cout << Word << "\n";
    }
}

//another solution
//void PrintEachWordInString(string Sentence)
//{
//    string Space = " ";
//    short SpacePostion = 0;
//    string Word = "";
//
//    cout << "Word: " << endl;
//    while ((SpacePostion = Sentence.find(Space)) != string::npos)
//    {
//        Word = Sentence.substr(0, SpacePostion);
//        if (Word != "")
//        {
//            cout << Word << "\n";
//        }
//
//        Sentence.erase(0, SpacePostion + Space.length());
//    }
//
//    if (Sentence != "")
//    {
//        cout << Sentence << "\n";
//    }
//}


int main()
{
    PrintEachWordInString(ReadText());
}


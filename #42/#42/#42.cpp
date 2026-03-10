#include <iostream>
#include <string>

using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string ReplaceTo)
{
    short postion = S1.find(StringToReplace);

    while (postion != string::npos)
    {
        S1 = S1.replace(postion, StringToReplace.length(), ReplaceTo);
        postion = S1.find(StringToReplace);
    }
    
    return S1;
}


int main()
{
    string S1 = "Welcome to USA , USA is a nice country";
    string StringToReplace = "USA";
    string ReplaceTo = "Egypt";

    cout << "\nOrigial String\n" << S1;
    cout << "\n\nString After Replace:";
    cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S1,StringToReplace, ReplaceTo) << endl;
}


#include <iostream>
#include <string>

using namespace std;

string ReadString(string message)
{
    string str;
    cout << message;
    getline(cin, str);
    return str;
}

void PrintFirstLetterOfEachWord(string sentence)
{
    // first word's first letter
    if (sentence.length() > 0)
        cout << sentence[0] << "   ";

    for (int i = 1; i < sentence.length(); i++)
    {
        if (sentence[i - 1] == ' ' && sentence[i] != ' ')
            cout << sentence[i] << "   ";
    }

    cout << endl;
}


int main()
{

    string sent; 
    sent = ReadString("Enter Your Full Name: ");
    
    cout << "First Letter In Each Word: ";
    PrintFirstLetterOfEachWord(sent);
    
}


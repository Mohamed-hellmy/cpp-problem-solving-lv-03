#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
    string str;
    cout << "Enter Your String: ";
    getline(cin, str);
    return str;
}


string ToLowerEachLetterInWord(string sentence)
{
    bool isFirstLetter = true;

    for (short i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && isFirstLetter)
        {
            sentence[i] = tolower(sentence[i]);

        }
        isFirstLetter = (sentence[i] == ' ' ? true : false);;

    }

    return sentence;
}

void PrintString(string sentence)
{
    cout << sentence;
}




int main()
{
    string Sentence = ReadString();
    Sentence = ToLowerEachLetterInWord(Sentence);
    cout << "\nString After Convert: " << "\n";
    PrintString(Sentence);
}


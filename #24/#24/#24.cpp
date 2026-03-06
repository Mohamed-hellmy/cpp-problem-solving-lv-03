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



string CapitalizeEachLetterInWord(string sentence)
{
    bool isFirstLetter = true;

    for (short i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && isFirstLetter)
        {
            sentence[i] = toupper(sentence[i]);

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
    Sentence = CapitalizeEachLetterInWord(Sentence);
    cout << "\nString After Convert: " << "\n";
    PrintString(Sentence);
}


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



string ToUpperSentence(string sentence)
{
    for (short i = 0; i < sentence.length(); i++)
    {
        sentence[i] = toupper(sentence[i]);
    }

    return sentence;

}

string ToLowerSentence(string sentence)
{
    for (short i = 0; i < sentence.length(); i++)
    {
        sentence[i] = tolower(sentence[i]);
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
    Sentence = ToLowerSentence(Sentence);
    cout << "\nString After Lower Case: " << "\n";
    PrintString(Sentence);

    Sentence = ToUpperSentence(Sentence);
    cout << "\nString After Upper Case: " << "\n";
    PrintString(Sentence);
}


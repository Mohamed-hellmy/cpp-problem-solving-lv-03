#include <iostream>
#include <string>

using namespace std;


string ReadText(string message)
{
    string Text;  

    cout << message;
    getline(cin, Text);              

    return Text; 
}


bool IsVowel(char letter)
{
    tolower(letter);

    return ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u'));
}


short CountVowels(string sentence)
{
    short counter = 0;

    for (short i = 0; i < sentence.length(); i++)
    {
        if (IsVowel(sentence[i]))
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    string sentence;
    sentence = ReadText("Enter A String: ");

    cout << "Vowel Numbers: " << CountVowels(sentence);

}


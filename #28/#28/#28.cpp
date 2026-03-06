#include <iostream>
#include <string>

using namespace std;

string ReadText(string sentence)
{
    string Text;  

    cout << sentence; 
    getline(cin, Text);              

    return Text; 
}

char InvertCharacter(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}

string InvertAllCharactersInSentence(string sentence)
{
    for (short i = 0; i < sentence.length(); i++)
    {
        sentence[i] = InvertCharacter(sentence[i]);
    }
    return sentence;
}


int main()
{
    string Sentence;
    Sentence = ReadText("Enter A String To Convert: ");
    cout << "Sentence After Convert: \n";
    Sentence = InvertAllCharactersInSentence(Sentence);
    cout << Sentence;

}


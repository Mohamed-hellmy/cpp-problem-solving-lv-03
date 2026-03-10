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

char ReadChar(string message)
{
    char ch;
    cout << message;
    cin >> ch;
    return ch;
}


short CountAllLetters(string Sentence, char Letter, bool MatchCase = true)
{
    short Counter = 0;
    for (short i = 0; i < Sentence.length(); i++)
    {
        if (MatchCase)
        {
            if (Sentence[i] == Letter)
            {
                Counter++;
            }
            
        }
        else if (toupper(Sentence[i]) == toupper(Letter))
        {
            Counter++;
        }
    }

    return Counter;

}

char InvertCharacter(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}


int main()
{
    string sentence;
    char letter;

    sentence = ReadText("Enter String: ");
    letter = ReadChar("Enter A Character To Count: ");

    cout << "\Count Of " << letter << " is: " << CountAllLetters(sentence, letter);

    cout <<"\nCount Of " << letter << " Or " << InvertCharacter(letter) << ": " 
    << CountAllLetters(sentence, letter, false);

}


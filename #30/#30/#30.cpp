#include <iostream>
#include <string>

using namespace std;

string ReadText(string message)
{
    string Text;

    cout << message ;
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


int CharacterCount(string sentence = 0, char letter = 0)
{   
    short counter = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (letter == sentence[i])
        {
            counter++;
        }
    }

    return counter;
}


int main()
{
   string sentence ;
   char letter;
   sentence = ReadText("Enter String: ");
   letter = ReadChar("Enter A Character To Count: ");
   cout << "Number Of " << letter << " is: " << CharacterCount(sentence, letter);
}


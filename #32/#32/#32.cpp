#include <iostream>
#include <string>

using namespace std;


char ReadChar(string message)
{
    char ch;
    cout << message;
    cin >> ch;
    return ch;
}


bool CheckVowelCharacter(char letter)
{
    tolower(letter);

    return ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'y'));
}




int main()
{
    char letter;
    letter = ReadChar("Enter A Letter: ");

    if (CheckVowelCharacter(letter))
    {
        cout << letter << ": Vowel";

    }
    else
    {
        cout << letter << ": Not Vowel";

    }

}


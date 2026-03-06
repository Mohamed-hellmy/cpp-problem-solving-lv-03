#include <iostream>

using namespace std;

char ReadChar(string message)
{
    char ch;
    cout << message;
    cin >> ch;
    return ch;
}

char InvertCharacter(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}

int main()
{
    char letter;
    letter = ReadChar("Enter Character To Convert: ");
    cout << InvertCharacter(letter);
}


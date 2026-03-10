#include <iostream>
#include <string>

using namespace std;

string ReadText(string message)
{
    string Text;  

    cout << message<< "\n"; 
    getline(cin, Text);              

    return Text; 
}


int CountCapitalLetters(string sentence)
{
    short counter = 0;
    for (short i = 0; i < sentence.length(); i++)
    {
        if (isupper(sentence[i]))
        {
            counter++;
        }
    }
    return counter;

}

int CountSmallLetters(string sentence)
{
    short counter = 0;
    for (short i = 0; i < sentence.length(); i++)
    {
        if (islower(sentence[i]))
        {
            counter++;
        }
    }
    return counter;

}



int main()
{   string sentence;
    sentence = ReadText("Enter A String: ");
    cout << "Number Of Whole Letters : " << sentence.length() << "\n";
    cout << "Number Of Capital Letters : " << CountCapitalLetters(sentence) << "\n";
    cout << "Number Of Small Letters : " << CountSmallLetters(sentence) << "\n";
    
}


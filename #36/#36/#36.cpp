#include <iostream>
#include <string>

using namespace std;

string ReadText()
{
    string Text;  

    cout << "Please enter Text?\n"; 
    getline(cin, Text);              

    return Text; 
}


short CounttEachWordInString(string Sentence)
{
    string Word = "";
    short Counter = 0;

    for (int i = 0; i < Sentence.length(); i++)
    {
        if (Sentence[i] != ' ')
        {
            Word += Sentence[i];
        }
        else
        {
            if (Word != "")
            {
                Counter++;
                Word = "";
            }
        }
    }


    if (Word != "")
    {
        Counter++;
    }

    return Counter;
}

int main()
{
    string sentence ;
    sentence = ReadText();
    cout << "Words Number: " << CounttEachWordInString(sentence) << endl;
        
}


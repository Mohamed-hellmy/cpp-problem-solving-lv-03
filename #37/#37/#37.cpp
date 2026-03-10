#include <iostream>
#include <string>
#include <vector>

using namespace std;


string ReadText()
{
    string Text;  

    cout << "Please enter Text?\n"; 
    getline(cin, Text);              
    return Text; 
}


vector<string> SplitEachWordInString(string Sentence, string Delim, vector<string>& vString)
{
    
    short DelimPostion = 0;
    string Word = "";

    while ((DelimPostion = Sentence.find(Delim)) != string::npos)
    {
        Word = Sentence.substr(0, DelimPostion);
        if (Word != "")
        {
            vString.push_back(Word);
        }

        Sentence.erase(0, DelimPostion + Delim.length());
    }

    if (Sentence != "")
    {
        vString.push_back(Word);

    }

    return vString;
}

void CountVectorContent(vector<string> vString)
{
    for (string& Word : vString)
    {
        cout << Word << endl;
    }
}


int main()
{
    vector<string> vString;
    
    SplitEachWordInString(ReadText(), " ", vString);

    cout << "Tokens: " << vString.size() << endl;

    CountVectorContent(vString);
    
}


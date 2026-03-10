#include <iostream>
#include <string>
#include <vector>

using namespace std;


string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

vector<string> SplitEachWordInString(string Sentence, string Delim)
{
    vector<string> vString;
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
        vString.push_back(Sentence);

    }

    return vString;
}


string ReverseString(string Sentence)
{   
    string S2 = "";
    vector<string> vString;

    vString = SplitEachWordInString(Sentence, " ");

    vector<string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        --iter;
        S2 += *iter + " ";
    }

    S2 = S2.substr(0, S2.length() - 1); 

    return S2;

}

int main()
{
    string Sentence = ReadString();
    cout << "String After Reverse: " << ReverseString(Sentence);
    
}


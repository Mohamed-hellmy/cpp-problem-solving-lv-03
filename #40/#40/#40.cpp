#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JointEachWordInString(vector<string> vString, string Delim)
{
    string S1 = "";
    for (string& word : vString)
    {
        S1 = S1 + word + Delim;
    }

    return S1.substr(0, S1.length() - Delim.length());

}

string JointEachWordInString(string ArrayOfStrings[],short ArrayLenght, string Delim)
{
    string S1 = "";

    for (int i = 0; i < ArrayLenght; i++)
    {
        S1 = S1 + ArrayOfStrings[i] +  Delim;
    }

    return S1.substr(0, S1.length() - Delim.length());

}

int main()
{
    vector<string> vString{ "Mohamed", "Mahmoud", "Helmy" };
    string ArrayOfStrings[3] = {"Mohamed", "Mahmoud", "Helmy" };

    cout << "Vector After Join:" << endl;
    cout << JointEachWordInString(vString, ",");

    cout << "\nArray After Join:" << endl;
    cout << JointEachWordInString(ArrayOfStrings, 3, ",");
}


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string TrimLeft(string Sentence)
{
	for (int i = 0; i < Sentence.length(); i++)
	{
		if (Sentence[i] != ' ')
		{
			return Sentence.substr(i, Sentence.length() - 1);
		}
	}

	return "";
}

string TrimRight(string Sentence)
{
	for (int i = Sentence.length() - 1; i >= 0; i--)
	{
		if (Sentence[i] != ' ')
		{
			return Sentence.substr(0, i + 1);
		}
	}

	return "";
}

string Trim(string Sentence)
{
	return TrimLeft(TrimRight(Sentence));
}

using namespace std;

int main()
{
	string Sentence = "    Moahmed Mahmoud Helmy    ";

	cout<< "Trim Left  Spaces:" << "|" << TrimLeft(Sentence)  << "|" << endl;
	cout<< "Trim Right Spaces:" << "|" << TrimRight(Sentence) << "|" << endl;
	cout<< "Trim All   Spaces:" << "|" << Trim(Sentence)      << "|" << endl;
}


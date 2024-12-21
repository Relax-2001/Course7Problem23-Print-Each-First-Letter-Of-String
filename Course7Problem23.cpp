#include <iostream>
#include <string>

using namespace std;

string ReadUserString()
{
	string UserString = " ";
	cout << "Enter your string\n";
	getline(cin , UserString);
	return UserString;
}

void PrintEachFirstLetter(string UserString)
{

	bool IsFirstLetter = true;

	for (short i = 0 ; i < UserString.length() ; i++)
	{
		if (UserString[i] != ' ' && IsFirstLetter)
		{
			cout << UserString[i] << endl;
		}
		
		IsFirstLetter = (UserString[i] == ' ' ? true : false);
	}


}

int main()
{
	PrintEachFirstLetter(ReadUserString());
	
}


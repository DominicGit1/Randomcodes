//Dominic Grant
//4/27/2019
//Print out uppercase, lowercase, and digit number of characters from a text file.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int lowerNum = 0, upperNum = 0, dig = 0;
	char a;
	ifstream input;
	input.open("text.txt");
	while (input >> a) 
	{
		if (islower(a))
		{
			lowerNum++;
		}
		if (isupper(a))
		{
			upperNum++;
		}
		if (isdigit(a))
		{
			dig++;
		}
	}
	cout << "Uppercase characters: " << upperNum << endl;
	cout << "Lowercase characters: " << lowerNum << endl;
	cout << "Digits: " << dig << endl;
	input.close();
	system("pause");
	return 0;
}


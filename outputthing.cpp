#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream infile;
	int numberOfNum;
	int printNum;
	int sum = 0;
	string filename;
	cout << "Enter file name.\nC:\\Users\\DOMGRANT\\Desktop\\insertfilenamehere \n";
	cin >> filename;
	infile.open(filename);
	if (infile)
	{
		cout << "How many numbers do you want to print to the file.\n";
		cin >> numberOfNum;
		for (int i = 1; i <= numberOfNum; i++)
		{
			cout << "Enter your number to be printed.\n";
			cin >> printNum;
			sum += printNum;
			infile << printNum << endl;
		}
		infile << "The sum of these numbers is " << sum << endl;
		infile.close();
	}
	return 0;
}
#include <iostream>
using namespace std;
void printout(int a, int b);
int evenOrOdd(int a, int b);

int main()
{
	int a, b;
	cout << "Enter first number: " << endl;
	cin >> a;
	cout << "Enter second number: " << endl;
	cin >> b;
	printout(a,b);
	evenOrOdd(a, b);
	system("PAUSE");
	return 0;
}
void printout(int a, int b)
{
	cout <<"The first number is "<< a << endl;
	cout <<"The second number is " << b << endl;
	cout <<"The first and second number multiplied together is " << a * b << endl;
	cout <<"The first and second number added together is " << a + b << endl;
	cout <<"The first number divided by the second number is " << a / b << endl;
}
int evenOrOdd(int a, int b)
{
	if ((a % 2) == 0)
	{
		cout << "The first number is even." << endl;
	}
	else
	{
		cout << "The first number is odd." << endl;
	}
	if ((b % 2) == 0)
	{
		cout << "The second number is even." << endl;
	}
	else
	{
		cout << "The second number is odd." << endl;
	}
	return a;
}
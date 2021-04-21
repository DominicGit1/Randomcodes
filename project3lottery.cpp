// Dominic Grant
// 4/14/2019
// A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit “lucky” combinations.
//Write a program  that initializes  an array  or a vector with these numbers and then lets the player enter this week’s 
//winning 5-digit number. The program  should perform a linear search through the list of the player’s numbers and report
//whether  or not one of the tickets is a winner this week. Here are the numbers:
#include <iostream>
using namespace std;


int searchit(int[], int, int);
int main()
{
	const int numbers = 10;
	int Lotto[numbers] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	int winningnums;
	int search;

	// Ask user to enter their 5 digit number
	cout << "Enter this weeks winning 5-digit number: ";
	cin >> winningnums;
	// search the array for user inputted number
	search = searchit(Lotto, numbers, winningnums);

	// Report whether or not one of the tickets is a winner this week.
	if (search == -1)
		cout << "Sorry, no winning ticket this week.\n";
	else
	{
		cout << "Congratulations!\nYou have the winning five-digit number: "
			<< Lotto[search] << endl;
	}
	system("pause");
	return 0;
}

int searchit(int list[], int size, int value)
{
	int index = 0;			
	int pos = -1;		
	bool found = false;		

	while (index < size && !found)
	{
		if (list[index] == value)	// If the value is found
		{
			pos = index;		// Record the value's subscript
			found = true;			// Set flag
		}
		index++;					// Go to next element
	}
	return pos;				// Return the position, or -1
}
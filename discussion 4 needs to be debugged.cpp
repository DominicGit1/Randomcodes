
/*David Chavez
April 21st, 2019*/
//Dominic Grant


// This program demonstrates a function that uses a
// pointer to a structure variable as a parameter.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;//fixed

struct Student
{
	string name;			  // Student's name
	int idNum;             // Student ID number
	int creditHours;       // Credit hours enrolled
	double gpa;			  // Current GPA
};

void getData(Student *);  // Function prototype

int main()
{
	Student freshman; //fixed

	// Get the student data.
	cout << "Enter the following student data:\n";
	getData(&freshman);    // Pass the address of freshman.
	cout << "\nHere is the student data you entered:\n";

	// Now display the data stored in freshman
	cout << setprecision(3);
	cout << "Name: " << freshman.name << endl;//all 4 fixed
	cout << "ID Number: " << freshman.idNum << endl;
	cout << "Credit Hours: " << freshman.creditHours << endl;
	cout << "GPA: " << freshman.gpa << endl;

	system("pause");
	return 0;//fixed
}

//*******************************************************
// Definition of function getData. Uses a pointer to a  *
// Student structure variable. The user enters student  *
// information, which is stored in the variable.        *
//*******************************************************

void getData(Student *s)
{
	// Get the student name.
	cout << "Student name: ";
	getline(cin, s->name);

	// Get the student ID number.
	cout << "Student ID Number: ";
	cin >> s->idNum;

	// Get the credit hours enrolled.
	cout << "Credit Hours Enrolled: ";
	cin >> s->creditHours;

	// Get the GPA.
	cout << "Current GPA: ";
	cin >> s->gpa;
}
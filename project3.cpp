/*Dominic Grant
3/18/2019
addition,subtraction,multiplication,division,exponential calculator and odd and even teller*/
#include <iostream> //preprocessor directive
#include <iomanip> //preprocessor directive
#include <string>//preprocessor directive
#include <cmath>
using namespace std; //which namespace to use

int main() //initalizing of function named main
{//beginning of block for main
	int programGoing = 0;//variable to keep program repeating
	double userinputOne, userinputTwo, check = 0;//variables to help with calculating and user inputing
	string choice;
	string seeing;//choice variable
	while (programGoing == 0)
	{
		string yousure;
		system("CLS");//clear the screen and print out the numbers that can be used by the user, then asks for user input
		cout << "Enter 1 to add\n2 to subtract\n3 to multiply\n4 to divide\n5 to raise a number by a power\n6 to see if a number is even or odd\n0 to end the program\n";
		cin >> choice;
		if (choice == "1" )//addition calculator
		{
			system("CLS");
			cout << "Enter the first number.If you want to enter 0 enter it NOW.\n";
			cin >> userinputOne;
			if (userinputOne == 0)//check if value is 0, which can be achieved by invalid input or by a 0
			{
				cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
				cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
				cin >> yousure;
			}
			while (1) //this while loop checks if the input is a number. Got it online
			{
				if ((userinputOne > check) || (userinputOne < check) || (yousure == "Y") || (yousure == "y"))
				{
					//valid number
					break;
				}
				else 
				{
					// not a valid number
					cout << "Invalid Input! Please input a numerical value." << endl;
					cin.clear();
					while (cin.get() != '\n');
					cin >> userinputOne;//this code forces user to input an actual number
				}
			}
			string yousure;
			cout << "Enter the second number.\n";
			cin >> userinputTwo;
			if (userinputTwo == 0)//check if value is 0, which can be achieved by invalid input or by a 0
			{
				cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
				cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
				cin >> yousure;
			}
			while (1) //this while loop checks if the input is a number. Got it online
			{
				if (userinputTwo > check || (userinputTwo < check) || (yousure == "Y") || (yousure == "y"))
				{
					// valid number
					break;
				}
				else
				{
					// not a valid number
					cout << "Invalid Input! Please input a numerical value." << endl;
					cin.clear();
					while (cin.get() != '\n');
					cin >> userinputTwo;//this code forces user to input an actual number

				}
			}
			cout << userinputOne << " + " << userinputTwo << " = " << (userinputOne+userinputTwo) << "\n";
			system("pause");
		}
		else if (choice == "2")//subtraction calculator
		{
			system("CLS");
			cout << "Enter the first number.If you want to enter 0 enter it NOW.\n";
			cin >> userinputOne;
			if (userinputOne == 0)//check if value is 0, which can be achieved by invalid input or by a 0
			{
				cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
				cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
				cin >> yousure;
			}
			while (1) //this while loop checks if the input is a number. Got it online
			{
				if ((userinputOne > check) || (userinputOne < check) || (yousure == "Y") || (yousure == "y"))
				{
					//valid number
					break;
				}
				else
				{
					// not a valid number
					cout << "Invalid Input! Please input a numerical value." << endl;
					cin.clear();
					while (cin.get() != '\n');
					cin >> userinputOne;//this code forces user to input an actual number
				}
			}
			string yousure;
			cout << "Enter the second number.\n";
			cin >> userinputTwo;
			if (userinputTwo == 0)//check if value is 0, which can be achieved by invalid input or by a 0
			{
				cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
				cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
				cin >> yousure;
			}
			while (1) //this while loop checks if the input is a number. Got it online
			{
				if (userinputTwo > check || (userinputTwo < check) || (yousure == "Y") || (yousure == "y"))
				{
					// valid number
					break;
				}
				else
				{
					// not a valid number
					cout << "Invalid Input! Please input a numerical value." << endl;
					cin.clear();
					while (cin.get() != '\n');
					cin >> userinputTwo;//this code forces user to input an actual number

				}
			}
			cout << userinputOne << " - " << userinputTwo << " = " << (userinputOne - userinputTwo) << "\n";
			system("pause");
		}
		else if (choice == "3")//multiplication calculator
		{
		system("CLS");
		cout << "Enter the first number.If you want to enter 0 enter it NOW.\n";
		cin >> userinputOne;
		if (userinputOne == 0)//check if value is 0, which can be achieved by invalid input or by a 0
		{
			cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
			cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
			cin >> yousure;
		}
		while (1) //this while loop checks if the input is a number. Got it online
		{
			if ((userinputOne > check) || (userinputOne < check) || (yousure == "Y") || (yousure == "y"))
			{
				//valid number
				break;
			}
			else
			{
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n');
				cin >> userinputOne;//this code forces user to input an actual number
			}
		}
		string yousure;
		cout << "Enter the second number.\n";
		cin >> userinputTwo;
		if (userinputTwo == 0)//check if value is 0, which can be achieved by invalid input or by a 0
		{
			cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
			cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
			cin >> yousure;
		}
		while (1) //this while loop checks if the input is a number. Got it online
		{
			if (userinputTwo > check || (userinputTwo < check) || (yousure == "Y") || (yousure == "y"))
			{
				// valid number
				break;
			}
			else
			{
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n');
				cin >> userinputTwo;//this code forces user to input an actual number

			}
		}
		cout << userinputOne << " * " << userinputTwo << " = " << (userinputOne * userinputTwo) << "\n";
		system("pause");
		}
		else if (choice == "4")//division calculator
		{
		system("CLS");
		cout << "Enter the first number.If you want to enter 0 enter it NOW.\n";
		cin >> userinputOne;
		if (userinputTwo == 0)//check if value is 0, which can be achieved by invalid input or by a 0
		{
			cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
			cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
			cin >> yousure;
		}
		while (1) //this while loop checks if the input is a number. Got it online
		{
			if ((userinputOne > check) || (userinputOne < check) || (yousure == "Y") || (yousure == "y"))
			{
				//valid number
				break;
			}
			else
			{
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n');
				cin >> userinputOne;//this code forces user to input an actual number
			}
		}
		string yousure;
		cout << "Enter the second number. You cannot enter a 0 here\n";
		cin >> userinputTwo;
		while (1) //this while loop checks if the input is a number. Got it online
		{
			if (userinputTwo > check || (userinputTwo < check) || (yousure == "Y") || (yousure == "y"))
			{
				// valid number
				break;
			}
			else
			{
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n');
				cin >> userinputTwo;//this code forces user to input an actual number

			}
		}
		cout << userinputOne << " / " << userinputTwo << " = " << (userinputOne / userinputTwo) << "\n";
		system("pause");
		}
		else if (choice == "5")//exponential calculator
		{
		system("CLS");
		cout << "Enter the first number.If you want to enter 0 enter it NOW.\n";
		cin >> userinputOne;
		if (userinputOne == 0)//check if value is 0, which can be achieved by invalid input or by a 0
		{
			cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
			cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
			cin >> yousure;
		}
		while (1) //this while loop checks if the input is a number. Got it online
		{
			if ((userinputOne > check) || (userinputOne < check) || (yousure == "Y") || (yousure == "y"))
			{
				//valid number
				break;
			}
			else
			{
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n');
				cin >> userinputOne;//this code forces user to input an actual number
			}
		}
		string yousure;
		cout << "Enter the second number.\n";
		cin >> userinputTwo;
		if (userinputTwo == 0)//check if value is 0, which can be achieved by invalid input or by a 0
		{
			cout << "Are you entering a 0?\nEnter a Y or a y for yes or enter anything else for no.\n(If you are seeing a 'Invalid Input' message right below this, that means \nyou entered in a letter.";
			cout << "You will have to enter any number besides 0 to \ncontinue the program.)\n";
			cin >> yousure;
		}
		while (1) //this while loop checks if the input is a number. Got it online
		{
			if (userinputTwo > check || (userinputTwo < check) || (yousure == "Y") || (yousure == "y"))
			{
				// valid number
				break;
			}
			else
			{
				// not a valid number
				cout << "Invalid Input! Please input a numerical value." << endl;
				cin.clear();
				while (cin.get() != '\n');
				cin >> userinputTwo;//this code forces user to input an actual number

			}
		}
		cout << userinputOne << " ^ " << userinputTwo << " = " << pow(userinputOne,userinputTwo) << "\n";
		system("pause");
		}
		else if (choice == "6")//Checks if a inputted number is even or odd
		{
			system("CLS");
			cout << "Enter the number. (Program is set to change decimals to integars.)\n";
			cin >> userinputOne;
			while (1) //this while loop checks if the input is a number. Got it online
			{
				if (userinputOne > check)
				{
					//valid number
					break;
				}
				else
				{
					// not a valid number
					cout << "Invalid Input! Please input a numerical value." << endl;
					cin.clear();
					while (cin.get() != '\n');
					cin >> userinputOne;//this code forces user to input an actual number

				}
			}
			if ((static_cast<int>(userinputOne) % 2) == 0)//changes double to int and checks if it's even or odd
			{
				cout << "The number is even." << endl;
			}
			else
			{
				cout << "The number is odd." << endl;
			}
			system("pause");
		}
		else if (choice == "0")//end program by changing programGoing variable to 1
		{
			system("CLS");
			programGoing = 1;
		}
		else//default catch code which tells user you can only enter between 0-6
		{
			system("CLS");
			cout << "Enter a valid number between 0 and 6.\n";
			system("pause");
		}
	}
	cout << "Goodbye.\n";//print out goodbye
	system("pause"); //Pauses the program so we can see
	return 0; //send 0 to operating system
}//end of block for main
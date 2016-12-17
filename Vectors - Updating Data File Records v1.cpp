//
// Demonstration of Vectors & Data File - Updating Data File Records from a file (design: data file conversion[switch structure, outline, option 7 - quit])
//
// HEADER FILES

#include <iostream>
#include <conio.h> //getch() - pause function 

using namespace std;

// CLASS/DATA STRUCTURE DECLARATION
// FUNCTION DECLARATION
int main()
{
	//INITIALIZATION
	int choice; // input-output variables
	//PROMPT USER
	system("cls");
	//cout << unknum.size() << " Employees in the vector\n\n";
	cout << "1 - DISPLAY Contents in the vector\n";
	cout << "2 - FIND a Record by EMPLOYEE ID: \n";
	cout << "3 - SORT ASCENDING Records by LAST NAME: \n";
	cout << "4 - DELETE Records by EMPLOYEE ID: \n";
	cout << "5 - CHANGE field(s) by EMPLOYEE ID: \n";
	cout << "6 - ADD a NEW Record to the vector\n";
	cout << "7 - Quit\n\n";
	
	cout << "Enter an Option (1 - 7): ";
	cin >> choice;
	cin.ignore(100, '\n');
	
	
	switch (choice)
	{
		//Option 1 - Display
		//Option 2 - Find
		//Option 3 - Sort (Ascending)
		//Option 4 - Delete
		//Option 5 - Change
		//Option 6 - Add
		//Option 7 - Quit
			case 7:
			{
				//Termination - Exit the Application
				system("cls");
				cout << "Quitting...\n";
				cout << "Hit Any Key to Continue...";
				getch();
				exit(0);
				
			}	 
	}
	
	//COMPUTERIZED CALCULATIONS
	//DISPLAY
	
	//TERMINATION
}
// FUNCTION DEFINITION




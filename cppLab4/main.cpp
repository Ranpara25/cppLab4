// Lab assignment 4 structs
// Jessica Barnes & Sharad Ranpara
// 3.09.2017

#include <iostream> 
#include <conio.h> 
#include<string>
#include<vector>

using namespace std;

// Structure for employee info

struct Employee
{
	int ID;
	string firstName;
	string lastName;
	float payRate;
	int hours;
}e;



int main()
{
	vector<int> empID;
	vector<string> fName;
	vector<string> lName;
	vector<float> pay;
	vector<int> hoursWorked;
	vector<float> totalValue;
	float grossTotal = 0;


	char input = 'y';
	int sum = 0;

	// employee info stored in vectors

	do
	{
		cout << "Enter employee ID: ";
		cin >> e.ID;
		empID.push_back(e.ID);

		cout << "Enter employee first name : ";
		cin >> e.firstName;
		fName.push_back(e.firstName);

		cout << "Enter employee last name : ";
		cin >> e.lastName;
		lName.push_back(e.lastName);

		cout << "Enter employee pay rate : ";
		cin >> e.payRate;
		pay.push_back(e.payRate);

		cout << "Enter employee hours worked : ";
		cin >> e.hours;
		hoursWorked.push_back(e.hours);


		cout << "Would you like to add another employee?: ";
		cin >> input;
	} while (input == 'Y' || input == 'y');

	cout << endl;

	// loop and print input from user

	cout << "Employee Report: " << endl;

	for (int i = 0; i < empID.size(); i++)
	{
		// variable to hold pay totals

		float totalValue = pay[i] * hoursWorked[i];
		grossTotal += totalValue;

		cout << empID[i] << ", " << fName[i] << " " << lName[i] << ", " << totalValue << endl;

	}

	cout << endl;

	cout << "The total gross pay is: " << grossTotal << endl;

	cout << endl;

	_getch();

	return 0;
}

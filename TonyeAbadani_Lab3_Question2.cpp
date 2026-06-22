#include <iostream>

using namespace std;

int main()
{
	string employeeName;
	int Salary;
	

	
	

	while(employeeName != "quit")
	{
		cout << "Please Enter your Name or enter quit: ";
		cin >> employeeName;

		if (employeeName == "quit")
			break;

		

		cout << "Enter your Salary from 80,000 - 160,000: ";
		cin >> Salary;
		{
			if (Salary >= 80000 && Salary <= 100000)

				cout << " The Job Grade for this employee is L1. ";

			else if (Salary >= 101000 && Salary <= 120000)
				cout << " The Job Grade L2.";

			else if (Salary >= 121000 && Salary <= 140000)
				cout << " The Job Grade for this employee is L3. ";

			else if (Salary >= 141000 && Salary <= 160000)
				cout << "The Job Grade for this employee is L4. ";

			else
				cout << "Please enter a valid Salary Range. ";

		}
	}

	
		
	



	
	
	return 0;
}
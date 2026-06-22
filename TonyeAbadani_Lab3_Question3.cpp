#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1;
	int num2;
	int operation;
	

	while (true)
	{
		cout << "Please enter your first number. " << endl;
		cin >> num1;



		cout << "Please enter your first number " << endl;
		cin >> num2;

		cout << "Please select a calculator operation" << endl;
		cout << " 1. Add" << endl;
		cout << " 2. Subtract" << endl;
		cout << " 3. Multiply" << endl;
		cout << " 4. Divide" << endl;
		cout << "5. Exit" << endl;
		cin >> operation;
		if (operation == 5)
			break;

		switch (operation)
		{
		case 1:
			cout << "The answer is " << num1 + num2 << endl;
			break;

		case 2:
			cout << "The answer is " << num1 - num2 << endl;
			break;

		case 3:
			cout << "The answer is " << num1 * num2 << endl;
			break;

		case 4:
			cout << "The answer is " << num1 / num2 << endl;
			break;
		}
	}





	return 0;
}
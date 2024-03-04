#include <iostream>
using namespace std;

void main()
{
	float number_1, number_2;
	char operation;
	cout << "\n\t\t\t\t\tSimple Calculator";
	cout << "\n________________________________________________________________________________________________________";
	cout << "\n\nOPERATIONS AVAILABLE: \n1. Addition ( + )\n2. Subtraction ( - )\n3. Multiplication ( * )\n4. Division ( / )\n5. Modulus ( % )  NOTE: Input should be just integer otherwise will be casted. \n\n\n";

	cout << "Please enter first number: ";
	cin >> number_1;
	cout << "Please enter second number: ";
	cin >> number_2;
	cout << "Please enter operator number: ";
	cin >> operation;
	cout << "\n\nAnswer: ";
	if (operation == '+')
		cout << number_1 << " + " << number_2 << " = " << number_1 + number_2;
	else if (operation == '-')
		cout << number_1 << " - " << number_2 << " = " << number_1 - number_2 << "\n\n";
	else if (operation == '*')
		cout << number_1 << " * " << number_2 << " = " << number_1 * number_2 << "\n\n";
	else if (operation == '/')
	{
		if (number_2 == 0)
			cout << "\nNumber can't be devided by Zero.";
		else
			cout << number_1 << " / " << number_2 << " = " << number_1 / number_2 << "\n\n";
	}
	else if (operation == '%')
		cout << number_1 << " % " << number_2 << " = " << (int)number_1 % (int)number_2 << "\n\n";
	else
		cout << "WRONG COMMAND!!!";
	cout << "\n\n";
}
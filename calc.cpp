#include <iostream>


int main()
{
	setlocale(LC_ALL, "ru");

	char operation;
	int a, b;

	std::cout << "Select an operation(+, -, *, /): ";
	std::cin >> operation;

	std::cout << "Enter the 1st number: ";
	std::cin >> a;

	std::cout << "Enter the 2nd number: ";
	std::cin >> b;


	if (operation == '+')
	{
		std::cout << a << "+" << b << "=" << a + b;
		return EXIT_SUCCESS;
	}
	else if (operation == '-')
	{
		std::cout << a << "-" << b << "=" << a - b;
		return EXIT_SUCCESS;
	}
	else if (operation == '*')
	{
		std::cout << a << "*" << b << "=" << a * b;
		return EXIT_SUCCESS;
	}
	else if (operation == '/')
	{
		std::cout << a << "/" << b << "=" << a / b;
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
}
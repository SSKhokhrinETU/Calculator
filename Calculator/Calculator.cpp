#include "pch.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	long int firstNumber = 0, secondNumber = 0;
	short int operationChoose = 0, exitButton = 0;
	while (exitButton != 27)
	{
		cout << "Enter first number" << endl;
		cin >> firstNumber;

		cout << "Choose arithmetic operation" << '\n'
			<< "1. Addition" << '\n'
			<< "2. Subtraction" << '\n'
			<< "3. Multiplication" << endl;
		cin >> operationChoose;

		cout << "Enter second number" << endl;
		cin >> secondNumber;

		switch (operationChoose)
		{
		case 1:
			cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
			break;
		case 2:
			cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
			break;
		case 3:
			cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
		}

		cout << "Press 'Esc' to exit" << '\n' << "Press another key to continue calculate" << endl << endl;
		Sleep(1000);
		exitButton = _getch();
	}

	return 0;
}

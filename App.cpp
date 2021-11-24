/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Carolina Duarte
 */

/*
Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use an if-statement to figure out which operation the user wants, for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

//Header file.
#include "std_lib_facilities.h"

int main()
{	
    //Declaration of variables that will be used:
    string operation;
	double val1, val2, result;

	bool x;
    x = false;

	cout << "Please insert an operation followed by two operands (Example + 100 3.14): ";
	cin >> operation >> val1 >> val2;

    //Conditions to recognize and perform operation inserted by user:
	if (operation == "+") {
		result = val1 + val2;
		x = true;
	}

	if (operation == "plus") {
		result = val1 + val2;
		x = true;
	}

	if (operation == "-") {
		result = val1 - val2;
		x = true;
	}

	if (operation == "minus") {
		result = val1 - val2;
		x = true;
	}

	if (operation == "*") {
		result = val1 * val2;
		x = true;
	}

	if (operation == "mul") {
		result = val1 * val2;
		x = true;
	}

	if (operation == "/") {
		result = val1 / val2;
		x = true;
	}

	if (operation == "div") {
		result = val1 / val2;
		x = true;
	}

    //Result display:
	if (x == true) {
		cout << "Your result is: " << result << '\n';
	}

    //Invalid operation inserted by user:
	else {
		cout << "Invalid operation.\n";
	}

	return 0;
}
// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stack.h"
#include <iostream>

int main()
{
	LStack<int> listOfInts;

    //Add ten integers
	for (int i = 1; i <= 10; ++i) {
		listOfInts.push(i);
	}
	if (listOfInts.isEmpty()) std::cout << "The list is empty." << std::endl;
	else std::cout << "The list is not empty." << std::endl;
	std::cout << "Top of the stack is " << listOfInts.top() << std::endl;
	std::cout << "The entire stack is ";
	listOfInts.print();

	//Remove five integers
	for (int i = 0; i < 5; ++i) {
		listOfInts.pop();
	}

	if (listOfInts.isEmpty()) std::cout << "The list is empty." << std::endl;
	else std::cout << "The list is not empty." << std::endl;
	std::cout << "Top of the stack is " << listOfInts.top() << std::endl;
	std::cout << "The entire stack is ";
	listOfInts.print();

	//Remove another five integers
	for (int i = 0; i < 5; ++i) {
		listOfInts.pop();
	}

	if (listOfInts.isEmpty()) std::cout << "The list is empty." << std::endl;
	else std::cout << "The list is not empty." << std::endl;
	std::cout << "Top of the stack is " << listOfInts.top() << std::endl;
	std::cout << "The entire stack is ";
	listOfInts.print();

	return 0;
}

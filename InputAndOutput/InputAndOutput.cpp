// InputAndOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
//using namespace std; // I like the idea of using the namespace as an identifier to keep the code more readable, keeping this as an artifact.

int main()
{
    std::string userInput = "";

    std::cout << "Hello World!" << std::endl; // Prints the famous "Hello World" and ends the line.
    std::cout << "Now Git-Pilled\n"; // Prints a message declaring the successful git functionality and ends the line.
    std::cout << "Enter an input: "; // Asks the user for an input.

    std::cin >> userInput; // Takes in user input

    std::cout << userInput << std::endl;

    if (userInput == "c")
    {
        return 1;
    }

    return 0;
}
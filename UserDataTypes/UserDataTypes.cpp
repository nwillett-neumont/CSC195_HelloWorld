#include <iostream>
#include "Employee.h"

int main()
{
    // Variables used in main
    int numberOfEmployees;
    Employee employees[5];

    std::cout << "Number of employees (maximum of five): " << std::endl;
    std::cin >> numberOfEmployees;

    if (numberOfEmployees > 5) numberOfEmployees = 5; // Makes sure the number of employees isn't greater than 5

    for (int i = 0; i < numberOfEmployees; i++) // Gets employee information for however many employees are specified
    {
        std::cout << "Enter employee " << (i + 1) << " details: " << std::endl;
        employees[i].Read();
    }
       
    std::cout << "Summary: " << std::endl;
    for (int i = 0; i < numberOfEmployees; i++) // Prints out employee information for however many employees are specified
    {
        employees[i].Write();
    }

    return 0;
}

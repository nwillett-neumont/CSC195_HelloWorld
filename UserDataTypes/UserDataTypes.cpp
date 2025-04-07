#include <iostream>
#include "Employee.h"

int main()
{
    // Variables used in main
    int numberOfEmployees;
    Employee employees[5];

    std::cout << "How many employees are there (maximum of five): " << std::endl;
    std::cin >> numberOfEmployees;

    if (numberOfEmployees > 5) numberOfEmployees = 5;

    for (int i = 0; i < numberOfEmployees; i++) 
    {
        std::cout << "Enter employee " << (i + 1) << " details: " << std::endl;
        employees[i].Read();
    }
       
    std::cout << "Summary: " << std::endl;
    for (int i = 0; i < numberOfEmployees; i++)
    {
        employees[i].Write();
    }

    return 0;
}

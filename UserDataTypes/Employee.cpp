#include "Employee.h"

// Define TAX_RATE as 10%
const float Employee::TAX_RATE = 0.1f;

void Employee::Read() // Gets employee info from user input
{
	std::cout << "Enter Name: " << std::endl;
	std::cin >> name;

	std::cout << "Enter Age: " << std::endl;
	std::cin >> age;

	std::cout << "Enter Zip Code: " << std::endl;
	std::cin >> zipCode;

	std::cout << "Enter hourly wage: " << std::endl;
	std::cin >> hourlyWage;

	std::cout << "Enter total hours worked this week: " << std::endl;
	std::cin >> hoursWorked;
}

void Employee::Write() // Prints employee information
{
	float weeklyGrossIncome = hourlyWage * hoursWorked;
	float weeklyIncomeTax = weeklyGrossIncome * TAX_RATE;
	float weeklyNetIncome = weeklyGrossIncome - weeklyIncomeTax;
	float yearlyGrossIncome = weeklyGrossIncome * 52;
	float yearlyNetIncome = yearlyGrossIncome - (yearlyGrossIncome * TAX_RATE);

	std::cout << "Employee Payroll Summary" << std::endl;
	std::cout << std::string('-', 30) << std::endl;  // Googled how to repeat a character in C++; <3 Stack Overflow
	std::cout << "Employee name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Zip Code: " << zipCode << std::endl;
	std::cout << "Hourly Wage: $" << hourlyWage << std::endl;
	std::cout << "Hours Worked: " << hoursWorked << std::endl;
	std::cout << "Weekly Gross Pay: $" << weeklyGrossIncome << std::endl;
	std::cout << "Weekly Net Pay: $" << weeklyNetIncome << std::endl;
	std::cout << "Yearly Gross Pay: $" << yearlyGrossIncome << std::endl;
	std::cout << "Yearly Net Pay: $" << yearlyNetIncome << std::endl;
}
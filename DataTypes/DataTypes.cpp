#include <iostream>

int main()
{
    // Necessary variables for the program
    // Tax rate
    const float TAX_RATE = 0.1f;
    // User information
    std::string name;
    char lastInitial;
    short age;
    bool isAdult;
    unsigned int zipCode;
    float wage;
    short daysWorked;
    short hoursWorkedPerDay[7];
    float totalHoursWorked = 0.0f;
    // Income calculation variables
    float grossIncome;
    float taxAmount;
    float netIncome;

    // Getting user inputs for the variables
    // First name
    std::cout << "Enter first name: " << std::endl;
    std::cin >> name;
    // Last initial
    std::cout << "Enter last initial: " << std::endl;
    std::cin >> lastInitial;
    // Age
    std::cout << "Enter age: " << std::endl;
    std::cin >> age;
    isAdult = (age >= 18);
    // Zipcode
    std::cout << "Enter zip code: " << std::endl;
    std::cin >> zipCode;
    // Hourly wage
    std::cout << "Enter hourly wage: " << std::endl;
    std::cin >> wage;
    // Number of days worked (max of 7)
    std::cout << "Enter number of days worked: " << std::endl;
    std::cin >> daysWorked;
    // Hours worked per day
    for (int i = 0; i < daysWorked; i++) {
        std::cout << "Enter hours worked for day " << i + 1 << std::endl;
        std::cin >> hoursWorkedPerDay[i];

        totalHoursWorked += hoursWorkedPerDay[i];
    }

    // Calculating Income
    grossIncome = totalHoursWorked * wage;
    taxAmount = grossIncome * TAX_RATE;
    netIncome = grossIncome - taxAmount;

    // Display information to the user
    std::cout << "\nEmployee Payroll Information:" << std::endl;
    std::cout << std::string(30,'-') << std::endl; // Googled how to repeat a character in C++ <3 Stack Overflow
    std::cout << "Name: " << name << " " << lastInitial << std::endl;
    std::cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    std::cout << "Zip Code: " << zipCode << std::endl;
    std::cout << "Hourly Wage: $" << wage << " per hour" << std::endl;
    std::cout << "Hours Worked: " << totalHoursWorked << " hours" << std::endl;
    std::cout << "Gross Income: $" << grossIncome << std::endl;
    std::cout << "Tax Amount: $" << taxAmount << std::endl;
    std::cout << "Net Income: $" << netIncome << std::endl;
}


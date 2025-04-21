#include <iostream>
#include "Database.h"

int main()
{   
    Database database;

    bool quit = false;
    std::string name;
    std::cout << std::string(40, 45) << "\n";
    while (!quit)
    {
        std::cout << "Please select an option: \n\t1 - Create\n\t2 - Display All\n\t3 - Display by Name\n\t4 - Display by Type\n\t5 - Quit\n";
        std::cout << std::string(40, 45) << "\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1: 
            std::cout << "Enter type (0 for FLINT, 1 for STEEL): ";
            int t;
            std::cin >> t;
            database.create(static_cast<Rock::eType>(t));
            break;
        case 2:
            database.displayAll();
            break;
        case 3: 
            std::cout << "Enter name: ";
            std::cin >> name;
            database.display(name);
            break;
        case 4:
        {
            std::cout << "Enter type (0 for FLINT, 1 for STEEL): ";
            int t;
            std::cin >> t;
            database.display(static_cast<Rock::eType>(t)); break;
        }
        case 5:
            quit = true;
            break;
        }
    }
}
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Database.h"

static void run()
{
    // Creating the necessary objects and values
    std::unique_ptr<Database> database{ new Database() };
    std::string name = "";
    bool quit = false;

    std::cout << std::string(40, 45) << "\n"; // Partitions for cute organization

    while (!quit)
    {
        // Prints out the menu, a partition and awaits user input
        std::cout << "Please select an option: \n\t1 - Create\n\t2 - Display All\n\t3 - Display by Name\n\t4 - Display by Type\n\t5 - Load data\n\t6 - Save data\n\t7 - Quit\n";
        std::cout << std::string(40, 45) << "\n" << ": ";
        int choice;
        std::cin >> choice;
        // Based on user input, do one of the following options, (or break horribly)
        switch (choice)
        {
        case 1:
            std::cout << "Enter type (0 for FLINT, 1 for STEEL): ";
            int t;
            std::cin >> t;
            database->create(static_cast<Rock::eType>(t));
            break;
        case 2:
            database->displayAll();
            break;
        case 3:
            std::cout << "Enter name: ";
            std::cin >> name;
            database->display(name);
            break;
        case 4:
        {
            std::cout << "Enter type (0 for FLINT, 1 for STEEL): ";
            int t;
            std::cin >> t;
            database->display(static_cast<Rock::eType>(t));
            break;
        }
        case 5:
            std::cout << "enter filename: ";
            std::cin >> name;
            database->load(name);
            break;
        case 6:
            std::cout << "enter filename: ";
            std::cin >> name;
            database->save(name);
            break;
        case 7:
            quit = true;
            break;
        default:
            std::cout << "THAT'S NOT AN ACCEPTABLE VALUE.";
            quit = true;
        }
    }
}

int main()
{
    run();
    _CrtDumpMemoryLeaks();
    return 0;
}

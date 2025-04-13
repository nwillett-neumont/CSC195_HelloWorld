#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>

// Creates a string array that holds the days of the week and prints them to the terminal alongside a title
void printDaysOfTheWeek() 
{
    std::array<std::string, 7> daysOfTheWeek = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    std::cout << "Days of the Week: " << "\n";
    for (std::string day : daysOfTheWeek)
    {
        std::cout << "\t" << day << "\n";
    }
}

// Creates a vector that holds integers 1-5, 
// then it adds 6 and 7 to the vector, 
// then it removes the last entry and prints out the numbers along with a title
void printNumbers() 
{
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };

    numbers.push_back(6);
    numbers.push_back(7);

    numbers.pop_back();

    std::cout << "Numbers: " << "\n";

    for (int number : numbers)
    {
        std::cout << "\t" << number << "\n";
    }
}

// Creates a list of fruits that contains "Apple", "Banana", and "Pear", 
// then it adds "Orange" to the front and "Potato" to the back, 
// it then removes "Potato" and prints out all of the fruits alongside a title
void printFruits() 
{
    std::list<std::string> fruits = { "Apple", "Banana", "Pear" };

    fruits.push_front("Orange");
    fruits.push_back("Potato");

    fruits.remove("Potato");

    std::cout << "Fruits: " << "\n";

    for (std::string fruit : fruits)
    {
        std::cout << "\t" << fruit << "\n";
    }
}

// Creates a map<string, int> and initializes it to {"Apples", 15}, {"Lemons", 20}, {"Pears", 25}, and {"Kiwis", 30},
// it then inserts { "Snickers", 30 }, { "Twix", 25 }, and { "Sour Patch Kids", 30 },
// then it sets the value of "Sour Patch Kids" to 0 and prints out all items alongside a title
void printStockedItems() 
{
    std::map<std::string, int> stockedItems = { {"Apples", 15}, {"Lemons", 20}, {"Pears", 25}, {"Kiwis", 30} };

    stockedItems.insert({ "Snickers", 30 });
    stockedItems.insert({ "Twix", 25 });
    stockedItems.insert({ "Sour Patch Kids", 30 });

    stockedItems["Sour Patch Kids"] = 0;

    std::cout << "Stocked Items: " << "\n";

    for (std::pair<std::string, int> item : stockedItems)
    {
        std::cout << "\t" << item.first << ", " << item.second << "\n";
    }
}

int main() // Calls all methods and separates them with partitions
{
    printDaysOfTheWeek();
    std::cout << std::string(40, 45) << "\n";
    printNumbers();
    std::cout << std::string(40, 45) << "\n";
    printFruits();
    std::cout << std::string(40, 45) << "\n";
    printStockedItems();
}
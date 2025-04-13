#include <iostream>
#include <vector>
#include <list>
#include <map>

int main()
{
    std::string fruits[] = {"Apple", "Banana", "Pear", "Kiwi", "Mango"};

    char charray[] = {'c'};
    
    std::vector<int> numbers = {1, 3};
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(9);

    numbers.pop_back();

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << std::endl;
    }

    std::cout << std::string(40, 45) << std::endl;

    // Pointer Arithmetic
    std::string chemicals[5] = {"Mercury", "Bromine", "Chlorine", "Sulfur", "Hydrogen"};

    std::cout << chemicals[3] << std::endl;
    std::cout << chemicals << std::endl;
    std::cout << &chemicals[0] << std::endl;

    for (int i = 0; i < sizeof(chemicals) / sizeof(std::string); i++) 
    {
        std::cout << chemicals[i] << std::endl;
    }

    std::cout << std::string(40, 45) << std::endl;

    std::string* pChemicals = chemicals;
    std::cout << pChemicals << std::endl;
    std::cout << ++pChemicals << std::endl;
    std::cout << ++pChemicals << std::endl;
    std::cout << --pChemicals << std::endl;
    
    std::list<std::string> colors = {"Red", "Blue", "Green", "Violet", "Tuah"};

    std::cout << colors.front() << std::endl;
    std::cout << colors.back() << std::endl;

    colors.pop_back();
    std::cout << colors.back() << std::endl;

    colors.push_front("Orange");
    std::cout << colors.front() << std::endl;

    std::map<int, char> letters = { {1, 'a'}, {2, 'b'}, {3, 'c'} };

    std::cout << letters[1] << letters[2] << letters[3] << std::endl;

    letters[2] = 'f';

    std::cout << letters[1] << letters[2] << letters[3] << std::endl;

    letters[4] = 'd';

    std::cout << letters[1] << letters[2] << letters[3] << letters[4] << std::endl;

    std::cout << letters.empty() << false << std::endl;
}
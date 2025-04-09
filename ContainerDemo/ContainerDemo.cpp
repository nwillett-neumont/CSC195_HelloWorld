#include <iostream>
#include <vector>

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
}
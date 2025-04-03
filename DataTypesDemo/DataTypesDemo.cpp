#include <iostream>
#include "Sandwich.h"
#include "Sandwich.cpp"

// Typedef - alias for a pre-exisiting data type more traditional
typedef float currency;
// Using, basically typedef again byt more modern
using salary = float;

int main()
{   
    // Sizes of the data types
    std::cout << "Size of Int (Bytes): " << sizeof(int) << std::endl;
    std::cout << "Size of Boolean (Bytes): " << sizeof(bool) << std::endl;
    std::cout << "Size of Character (Bytes): " << sizeof(char) << std::endl;
    std::cout << "Size of Float (Bytes): " << sizeof(float) << std::endl;
    std::cout << "Size of Short (Bytes): " << sizeof(short) << std::endl;
    std::cout << "Size of Long (Bytes): " << sizeof(long) << std::endl;
    std::cout << "Size of Double (Bytes): " << sizeof(double) << std::endl;

    // Implicit conversion
    short i = 14;
    int iInt = i;
    float iFloat = iInt;
    double iDouble = iFloat;
    std::cout << iDouble << std::endl;

    // Explicit conversion
    double j = 142.0;
    float jFloat = (float)j; // Traditional C++ casting
    float jFloat2 = static_cast<float>(j);
    std::cout << "double: " << j << std::endl << "Cast to float: " << jFloat << ", " << jFloat2 << std::endl;

    // Structures - Class without functions
    struct MyStruct
    {
    public: 
        int myNumber;
    private:
        int yourNumber;
    };

    // Classes
    class MyClass
    {
    public:
        int returnOne() {
            return 1;
        }
    };

    // Union
    union MyUnion 
    {
    public:
        int freaky;
        float deaky;
        char tweaky;
    };

    // Enum - predefined data
    enum MyEnum
    {
        VALUE_1,
        VALUE_2,
        VALUE_3
    };

    std::cout << sandwichRunner().isHot << std::endl;
    std::cout << sandwichRunner().meat << std::endl;

}
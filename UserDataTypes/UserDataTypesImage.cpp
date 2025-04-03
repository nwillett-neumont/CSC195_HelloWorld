#include <iostream>

class SodaCan 
{
public:
    // Public class properties
    std::string brand;
    std::string flavor;
    bool isOpen;
    int calories;
    float volume;
    float sodaLeft;

    // Class constructor (found out how to do this from Microsoft's documentation)
    SodaCan(std::string brand, std::string flavor, int calories, float volume)
        : brand(brand)
        , flavor(flavor)
        , calories(calories)
        , volume(volume)
        , isOpen(false)
        , sodaLeft(volume)
    {}

    // Public class methods
    void open() 
    {
        isOpen = true;
        std::cout << "Opened can." << std::endl;
    }

    void drink() 
    {
        if ((sodaLeft - 5) > 0) {
            sodaLeft -= 5;
            std::cout << "Drank soda." << std::endl;
        }
        else {
            sodaLeft = 0;
            std::cout << "No more soda." << std::endl;
        }
    }

    void crushCan() 
    {   
        std::cout << "Crushed can." << std::endl;
    }

};

class Calculator 
{
public:
    // Calculator properties
    std::string brand;
    std::string model;
    int amountOfButtons;
    bool hasPower;

    // Calculator constructor
    Calculator(std::string brand, std::string model, int amountOfButtons, bool hasPower)
        : brand(brand)
        , model(model)
        , amountOfButtons(amountOfButtons)
        , hasPower(hasPower)
    {}

    // Calculator methods
    int add(int value1, int value2)
    {
        return value1 + value2;
    }

    int subtract(int value1, int value2)
    {
        return value1 - value2;
    }

    int multiply(int value1, int value2)
    {
        return value1 * value2;
    }

    int divide(int value1, int value2)
    {
        return value1 / value2;
    }
};

int main()
{
    SodaCan crush("Crush", "Orange", 160, 12);
    Calculator texasInstruments("Texas Instruments", "TI-30XIIS", 44, true);

    std::cout << "Brand: " << crush.brand << std::endl
        << "Flavor: " << crush.flavor << std::endl
        << "Is open: " << crush.isOpen << std::endl
        << "Calories: " << crush.calories << std::endl
        << "volume: " << crush.volume << std::endl
        << "Soda left: " << crush.sodaLeft << std::endl;

    crush.open();
    crush.drink();
    std::cout << std::endl;

    std::cout << "Brand: " << crush.brand << std::endl
        << "Flavor: " << crush.flavor << std::endl
        << "Is open: " << crush.isOpen << std::endl
        << "Calories: " << crush.calories << std::endl
        << "volume: " << crush.volume << std::endl
        << "Soda left: " << crush.sodaLeft << std::endl;

    crush.crushCan();
    std::cout << std::endl;

    std::cout << "Brand: " << texasInstruments.brand << std::endl
        << "Model: " << texasInstruments.model << std::endl
        << "Buttons: " << texasInstruments.amountOfButtons << std::endl
        << "isPowered: " << texasInstruments.hasPower << std::endl;

    std::cout << std::endl;

    return 0;
}
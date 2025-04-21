#include <iostream>
#include <vector>
#include "Animal.h"
#include "Frog.h"
#include "Armadillo.h"

int main()
{
    Frog martin = Frog("Martin");
    Armadillo* p_armadillo = new Armadillo("Josh", false);
    Animal* p_mrSmith = new Frog("Mr. Smith");

    martin.move();

    p_armadillo->move();
    p_armadillo->speak();
    p_armadillo->defend();

    p_mrSmith->move();
    p_mrSmith->speak();
    
    std::vector<Animal*> zoo = {p_mrSmith, p_armadillo};
    zoo.push_back(new Armadillo);
    zoo.push_back(new Frog);

    for (Animal* animal : zoo)
    {
        std::cout << "This animal's name is " << animal->getName() << "\n";
        delete animal;
    }
}
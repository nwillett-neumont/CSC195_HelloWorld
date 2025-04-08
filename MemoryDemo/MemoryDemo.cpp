#include <iostream>

void set(int i) 
{
    i = 123;
}

void setReference(int i) 
{
    i = 321;
}

void swap(int* i1, int* i2)
{
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 20;

    int& j = i1;
    j = 40;

    set(i1);
    setReference(i2);
    
    std::cout << i1 << std::endl << i2 << std::endl << sizeof(int) << std::endl;
    std::cout << &i1 << std::endl << &j << std::endl;

    swap(&i1, &i2);

    int* nullP = nullptr;
    int* p = &i1;

    std::cout << i1 << std::endl << i2 << std::endl << p << std::endl << &p << std::endl;
}
#include <iostream>
#include "TemplateClass.h"

namespace gay
{
    template<typename T1, typename T2>

    T1 max(T1 i, T2 j)
    {
        return (i > j) ? i : j;
    }
}

int main()
{
    std::cout << gay::max(1, 2) << gay::max(4, 3)  << gay::max(7.7f, 9.1f) << gay::max(true, 798.44) << "\n";

    TemplateClass<float> templ(1.1, 2.2);
    TemplateClass<> fent;

    Array<std::string, 200> strAr;

    std::cout << (strAr[99] = "GAY PEOPLE") << "\n";
}

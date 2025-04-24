#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void write(const std::string& text, std::ostream& ostream);

void write(std::vector<int>& numbers, std::ofstream& ofstream);

void read(std::string& text, std::ifstream& ifstream);

void read(std::vector<int>& numbers, std::ifstream& ifstream);

int main()
{
    std::string text = "Freaky\n";

    std::cout << text;

    std::cin >> text;

    // std::cout << text << "\n";

    std::getline(std::cin, text);

    std::cout << text << "\n";

    write(text, std::cout);

    std::ofstream out = std::ofstream("Junk.txt");

    out << "Hawk Tuah";

    write("Hawk Tuah", out);

    out.close();

    std::ifstream in = std::ifstream("Junk.txt");

    std::getline(in, text);

    // in >> text;

    in.close();

    std::cout << text << "\n";

    std::vector<int> numbers = { 1, 2, 3, 4, 5 };

    out.open("Numbers.txt");

    write(numbers, out);

    out.close();

    numbers.clear();

    in.open("Numbers.txt");

    read(numbers, in);

    in.close();

    for (int i : numbers)
    {
        std::cout << i << std::endl;
    }
}

void write(const std::string& text, std::ostream& ostream)
{
    ostream << text;
}

void write(std::vector<int>& numbers, std::ofstream& ofstream)
{
    for (int i : numbers)
    {
        ofstream << i << std::endl;
    }
}

void read(std::string& text, std::ifstream& ifstream)
{
    ifstream >> text;
}

void read(std::vector<int>& numbers, std::ifstream& ifstream)
{
    while (!ifstream.eof())
    {   
        int k;
        ifstream >> k;

        if (!ifstream.fail())
        {
            numbers.push_back(k);
        }
    }
}
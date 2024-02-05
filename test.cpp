#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char **argv)
{
    std::string line = argv[1];
    std::size_t found = line.find(argv[2]);

    std::cout << "value: " << found <<std::endl;

    std::string key = argv[2];
    std::string new_line = line.erase(found, key.length());
    new_line = line.insert(found, "hoy");

    std::cout << new_line << std::endl;
    return 0;
}
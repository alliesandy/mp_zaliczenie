#include <iostream>
#include "kwadrat.hpp"

int main(int argc, char* argv[]) {
        std::cout << argv[0] << std::endl;
    if (argc < 2) {
        std::cout << "Nie podano liczby" << std::endl;
    } 
    else {
        std::cout << "Kwadrat liczby wynosi: " << kwadrat(std::stof(argv[1])) << std::endl;
    }
}
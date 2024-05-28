#include <iostream>
#include <ostream>
#include <string>

int main() {
    // Creation
    int nums[3];

    std::cout << nums[1] << std::endl;

    // Modification
    nums[1] = 2;

    std::cout << nums[1] << std::endl;

    // Looping
    // Standard
    std::string names[] = {"Alyssa", "Ryan", "Jake"};
    for (int i = 0; i < sizeof(names) / sizeof(std::string); i++) {
        std::cout << names[i] << std::endl;
    }

    // For-each (> C++ 11)
    for (std::string n : names) {
        std::cout << n << std::endl;
    }

    // Getting length -- returns byte value
    std::cout << sizeof(names) << std::endl;
    // Divide by size of data type to get number of elements
    std::cout << sizeof(names) / sizeof(std::string) << std::endl;


    // Multi-Dimensional Arrays
    std::string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    std::cout << letters[1] << std::endl;
    std::cout << letters[1][1] << std::endl;

    for(int i = 0; i < sizeof(letters) / sizeof(letters[0]); i++) {
        for(int j = 0; j < sizeof(letters[i]) / sizeof(std::string); j++) {
            std::cout << letters[i][j] << std::endl;
        } 
    }
    
    return 0;
}

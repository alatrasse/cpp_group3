#include "String.h"
#include <iostream>


int main() {

    // TEST OF THE DEFAULT CONSTRUCTOR
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 1: DEFAULT CONSTRUCTOR\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the default constructor.\n"
              << "For example, the initialization of two objects with the string 'Hello World' will be demonstrated below.\n";
    std::cin.get();

    // Create the object
    String obj1;

    // Print the data of the object
    std::cout << "Object 1 - ID: " << obj1.getId() << ", String: " << obj1.c_str() << ", Size: " << obj1.Size() << std::endl;

    String obj2;
    std::cout << "Object 2 - ID: " << obj2.getId() << ", String: " << obj2.c_str() << ", Size: " << obj2.Size() << std::endl << std::endl;
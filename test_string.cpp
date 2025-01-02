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
    std::cout << "Object 1 - ID: " << obj1.getId() << ", String: " << obj1.c_str() << ", Size: " << obj1.size() << std::endl;

    String obj2;
    std::cout << "Object 2 - ID: " << obj2.getId() << ", String: " << obj2.c_str() << ", Size: " << obj2.size() << std::endl << std::endl;

    // TEST OF CONSTRUCTOR FROM C_STRING: 
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 2: CONSTRUCTOR FROM A C-STRING\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the constructor.\n"
    std::cin.get(); 

    //Define a new c-string: 
    const char* my_c_string = "Hello!"
    //Creation of a object from c-string: 
    String obj3(my_c_string); 
    std::cout << "Object 3 - My C-string is: " << my_c_string << std::endl; 
    std::Cout << "My new string is: " << obj3.print() << std::endl; 

    // TEST OF LENGTH METHOD:
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST ...: LENGTH() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the length() method that returns the length of the string in object1.\n";
    std::cin.get();
    std::cout << "Object 1 length: " << obj1.length() << std::endl;

    // TEST OF MAX SIZE METHOD: 
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST ...: MAX_SIZE() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the max_size() method that returns the max size for a string with our class.\n";
    std::cin.get(); 
    std::cout << "Max size for the string: " << obj1.max_size() << std::endl; 

    // TEST OF RESIZE METHOD: 
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST ...: RESIZE() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test resize() method that returns a string with a different size and new characters.\n";
    std::cin.get(); 
    // Resize of obj3 with size 10 and '!' as character:  
    std::cout << "Original object: " << obj3.print() << std::endl; 
    obj3.resize(10, '!');
    std::cout << "Object after resizing: " << obj3.print() << std::endl; 

    // TEST OPERATOR=(const String& other)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR=(const String& other)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator = with a reference for a string.\n"; 
    std::cin.get(); 
    // Assign obj3 to obj4:
    std::cout << "Object 3: " << obj3.print() << std::endl; 
    String obj4 = obj3; 
    std::cout << "Assignment object4 = object3..." << std::endl; 
    std::cout << "Object 4: " << obj4.print() << std::endl; 

    // TEST OPERATOR+(const String&, char)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR+(const String&, char)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator + to append the char c to a string.\n"; 
    // Append '?' to obj3: 
    std::cout << "Object 3: " << obj3.print() << std::endl;
    String obj5 = obj3 + '?';
    std::cout << "Concatenation of obj3 and '?': " << obj5.print() << std::endl; 
    
     
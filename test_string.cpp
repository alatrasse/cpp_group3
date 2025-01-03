#include "String.h"
#include <iostream>


int main() {

//-------------------------------------------- STUDENT A ------------------------------------------------ //
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


    // TEST OF THE COPY CONSTRUCTOR
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 2: COPY CONSTRUCTOR\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the copy constructor that create a new object that is the same of another one that you choose" << std::endl;  
    std::cin.get();
    int choice;
    
    do {
    std::cout << "Choose which object to copy (1 or 2): ";
    std::cin >> choice;
    } while (choice != 1 && choice != 2);
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    if (choice == 1) {
    String Object_copy(obj1);
    std::cout << "\nYou have selected object 1" << std::endl;
    std::cout << "Object 1 - ID: " << obj1.getId() << ", String: " << obj1.c_str() << ", Size: " << obj1.Size() << std::endl << std::endl;
    std::cout << "Object_copy - ID: " << Object_copy.getId() << ", String: " << Object_copy.c_str() << " with size: " << Object_copy.Size() << std::endl << std::endl;
    } else {
    String Object_copy(obj2);
    std::cout << "\nYou have selected object 2" << std::endl;
    std::cout << "Object 2 - ID: " << obj2.getId() << ", String: " << obj2.c_str() << ", Size: " << obj2.Size() << std::endl << std::endl;
    std::cout << "Object_copy - ID: " << Object_copy.getId() << ", String: " << Object_copy.c_str() << " with size: " << Object_copy.Size() << std::endl << std::endl;
    }


    // TEST OF C_str() FUNCTION
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 3: C_str() FUNCTION\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the C_str() function that returns the C-style string of object1.\n";
    std::cin.get();
    std::cout << "Object 1 string: " << obj1.c_str() << std::endl;

    // TEST OF SIZE() FUNCTION
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 4: SIZE() FUNCTION\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the size() function that returns the size of the string in object1.\n";
    std::cin.get();
    std::cout << "Object 1 size: " << obj1.Size() << std::endl;

    // TEST OF CLEAR() FUNCTION
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 5: CLEAR() FUNCTION\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the clear() function.\n";
    std::cin.get();

    std::cout << "Before clear():\n";
    std::cout << "Object 1 - String: \"" << obj1.c_str() << "\", Size: " << obj1.Size() << std::endl;

    obj1.clear();

    std::cout << "\nAfter clear():\n";
    std::cout << "Object 1 - String: \"" << obj1.c_str() << "\", Size: " << obj1.Size() << std::endl;

    // TEST operator=(char) FUNCTION
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 6: operator=(char) FUNCTION\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator=(char) function.\n";
    std::cin.get();

    std::cout << "Before operator=(char):\n";
    std::cout << "Object 1 - String: \"" << obj1.c_str() << "\", Size: " << obj1.Size() << std::endl;

    char userChar;
    

    // Loop to get a single character input
    do {
    std::cout << "\nEnter a single character to assign to the object: ";
    std::cin >> userChar;

    // Check if the input is valid
    if (std::cin.fail() || std::cin.peek() != '\n') {
        std::cin.clear();  // Reset the state of the stream
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the incorrect input
        std::cout << "Error: You must enter exactly one character. Please try again.\n";
    } else {
        break; // Valid input, exit the loop
    }
    } while (true);

    obj1 = userChar;

    std::cout << "\nAfter operator=(char):\n";
    std::cout << "Object 1 - String: \"" << obj1.c_str() << "\", Size: " << obj1.Size() << std::endl;

    // TEST operator+(const string&, const char)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 7: operator+(const string&, const char) FUNCTION\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator+(const string&, const char) function.\n";
    std::cin.get();
    String obj3;
    char cstr[100];

    // Ask the user to choose a sentence
    std::cout << "Enter a sentence to concatenate to object2 to create a new object with the result: ";
    std::cin.ignore();
    std::cin.getline(cstr, 100);


    std::cout << "\nBefore operator+(const string&, const char):\n";
    std::cout << "Object 2 - String: \"" << obj2.c_str() << "\", Size: " << obj2.Size() << std::endl;
    std::cout << "User string: \"" << cstr << "\"" << std::endl;

    obj3 = obj2 + cstr; 
    
    // Print the string and size after using operator+(const string&, const char)
    std::cout << "\nAfter operator+(const string&, const char):" << std::endl;
    std::cout << "Object 2 - String: \"" << obj2.c_str() << "\", Size: " << obj2.Size() << std::endl;
    std::cout << "Nothing changed in Object 1, and this is correct!" << std::endl;
    std::cout << "\nObject 3 - String: \"" << obj3.c_str() << "\", Size: " << obj3.Size() << std::endl;
    std::cout << "Object 3 now contains the concatenated string." << std::endl;

//-------------------------------------------- STUDENT B ------------------------------------------------ //
    // TEST OF CONSTRUCTOR FROM C_STRING: 
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 8: CONSTRUCTOR FROM A C-STRING\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the constructor.\n";
    std::cin.get(); 
    //Define a new c-string: 
    const char* my_c_string = "Hello!";
    //Creation of a object from c-string: 
    String obj3(my_c_string); 
    std::cout << "Object 3 - My C-string is: " << my_c_string << std::endl; 
    std::cout << "My new string is: " << obj3.c_str() << std::endl;

    // TEST OF LENGTH METHOD:
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 9: LENGTH() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the length() method that returns the length of the string in object1.\n";
    std::cin.get();
    std::cout << "Object 1: " << obj1.c_str() << std::endl; 
    std::cout << "Object 1 length: " << obj1.length() << std::endl;

    // TEST OF MAX SIZE METHOD: 
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 10: MAX_SIZE() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the max_size() method that returns the max size for a string with our class.\n";
    std::cin.get(); 
    std::cout << "Max size for the string: " << obj1.max_size() << std::endl;

    // TEST OF RESIZE METHOD: 
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 11: RESIZE() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test resize() method that returns a string with a different size and new characters.\n";
    std::cin.get(); 
    // Resize of obj3 with size 10 and '!' as character:  
    std::cout << "Original object: " << obj3.c_str() << std::endl; 
    obj3.resize(10, '!');
    std::cout << "Object after resizing: " << obj3.c_str() << std::endl; 


    // TEST OPERATOR=(const String& other)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR=(const String& other)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator = with a reference for a string.\n"; 
    std::cin.get(); 
    // Assign obj3 to obj4:
    std::cout << "Object 3: " << obj3.c_str() << std::endl; 
    String obj4 = obj3; 
    std::cout << "Assignment object4 = object3..." << std::endl; 
    std::cout << "Object 4: " << obj4.c_str() << std::endl;

    /    // TEST OPERATOR+(const String&, char)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR+(const String&, char)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator + to append the char c to a string.\n"; 
    // Append '?' to obj3: 
    std::cout << "Object 3: " << obj3.c_str() << std::endl;
    String obj5 = obj3.c_str() + '?';
    std::cout << "Concatenation of obj3 and '?': " << obj5.c_str() << std::endl; 
    

//-------------------------------------------- STUDENT C ------------------------------------------------ //


    return 0;
}
     
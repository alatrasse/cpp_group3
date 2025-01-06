#include "String.h"
#include <iostream>
#include <limits>


int main() {
// PROJECT STRING
// MEMBERS: Nicolò Manni, Andrea Bolla, Arthur Latrasse
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
    String obj4(my_c_string); 
    std::cout << "Object 4 - My C-string is: " << my_c_string << std::endl; 
    std::cout << "My new string is: " << obj4.c_str() << std::endl;

    // TEST OF LENGTH METHOD:
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST 9: LENGTH() METHOD\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the length() method that returns the length of the string in object5.\n";
    std::cin.get();
    String obj5("Bonjour");
    std::cout << "Object 5: " << obj5.c_str() << std::endl; 
    std::cout << "Object 5 length: " << obj5.length() << std::endl;

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
    size_t n; 
    std::cout << "Enter the new size for the string: "; 
    std::cin >> n;
    char c;
    std::cout << "Enter the character to resize the string: "; 
    std::cin >> c;
    String obj6("Hello");
    std::cout << "Original object: " << obj6.c_str() << std::endl; 
    std::cout << "Resizing --> new size = " << n << " adding '" << c << "'" << std::endl;
    obj6.resize(n, c);
    std::cout << "Object after resizing: " << obj6.c_str() << std::endl; 
    std::cout << "New object length: " << obj6.length() << std::endl;

    // TEST OPERATOR=(const String& other)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR=(const String& other)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator = with a reference for a string.\n"; 
    std::cin.get(); 
    // Assign obj7 to obj8:
    String obj7("Good Morning");
    std::cout << "Object 7: " << obj7.c_str() << std::endl; 
    String obj8 = obj7; 
    std::cout << "Assignment object8 = object7..." << std::endl; 
    std::cout << "Object 8: " << obj8.c_str() << std::endl;
    // TEST OPERATOR+(const String&, char)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR+(const String&, char)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the operator + to append the char c to a string.\n"; 
    // Append '?' to obj4: 
    String obj9("How are you");
    char c_user;
    std::cout << "Enter the character to append to " << obj9.c_str() << ": ";
    std::cin >> c_user; 
    std::cout << "Object 9: " << obj9.c_str() << std::endl;
    std::cout << "I want to append " << c_user << " to obj9" << std::endl;
    String obj10;
    obj10 = obj9 + c_user;
    std::cout << "Concatenation of obj9 and " << c_user <<": " << obj10.c_str() << std::endl; 
    

// //-------------------------------------------- STUDENT C ------------------------------------------------ //
    // TEST OF CAPACITY() FUNCTION
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST CAPACITY() FUNCTION\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to test the capacity() function that returns the capacity of obj1.\n";
    std::cin.get();
    std::cout << "Object 1 capacity: " << obj1.capacity() << std::endl;
  

    std::cout << "TEST EMPTY()\n";
    std::cout << "***********************************************************\n";
    std::cout << "Press any key to initiate an empty obj7 and test if it is empty.\n"; 
     
    
    String obj11;
    obj11.resize(0);
    
    std::cout << "for object 11, empty() returns : " << obj11.empty() << std::endl;
    
    std::cout << "While on the other end, for a full object like obj1, empty() returns : " << obj1.empty() << std::endl;
    
     // TEST OPERATOR=(const char* c)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR=(const char* c)\n";
    std::cout << "***********************************************************\n";
    std::cout << "Please enter letter by letter to fill a 3-letter char*.\n";
    char* sequence = new char[3];
    std::cin >> sequence[0];
    std::cin >> sequence[1];
    std::cin >> sequence[2];
    // Assign sequence to obj12:
    String obj12 = sequence; 
    delete[] sequence;
    std::cout << "Object 12: " << obj12.c_str() << std::endl;
    
     
   // TEST OPERATOR+(const &string, const &string)
    std::cout << "\n***********************************************************\n";
    std::cout << "TEST OPERATOR+(const &string, const &string)\n";
    std::cout << "***********************************************************\n";
    std::cout << "we will concatenate the following objects:\n";
    char* Hello = new char[7] { 'H' , 'e' , 'l' , 'l' , 'o' , ' ', '\0'};
    char* World = new char[6]  { 'W' , 'o' , 'r' , 'l' , 'd' , '\0'}; 
    String obj13;
    obj13 = Hello;
    String obj14; 
    obj14 = World;
    delete[] Hello;
    delete[] World;
    std::cout << "Object 13: " << obj13.c_str() << std::endl; 
    std::cout << "Object 14: " << obj14.c_str() << std::endl;
    String concatenation;
    concatenation = obj13 + obj14;
    std::cout << "Concatenation result : " << concatenation.c_str() << std::endl;
    return 0;
}
     

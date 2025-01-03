#ifndef STRING_H
#define STRING_H

#include <cstddef> //for size_t

class String {
  private: 
  int id; // Id of the object
  char* data_; //array that contain the string
  size_t size_; 
  size_t capacity_;
  
  // What is this?
  //void reserve(size_t new_capacity); //It is useful when we have to increase the capacity of dynamic array

  //Member function
  public:

  //-------------------------------------------- STUDENT A ------------------------------------------------ //
    
  //Default constructor
  String(); 

  //Copy constructor: create an object equal to another
  String(String& other);


  //C_str() function that return the pointer to the first element in the array of the c-style string 
  // It necessary the char* and not the char because we are passing an array that and
  //with a \0 e not a singol character so we need to pass a pointer
  const char* c_str() const; 

  int getId();

  //Size: function that return the size of the string
  size_t Size();

  size_t getSize() const;

  // Function to update the size
  void setSize(size_t newSize);

  //Clear: function that clear the string
  void clear();

  //Operator that set the string to 1 character choose from the user
  void operator=(char c);
    
  // Operator that concatenates a C-style string with a single character
  //String first means that the function return a new object
  String operator+(const char* cstr) const;

  // // i think that we can delate thIS function below becuase aremy function that i had already implemented up
  // //Default constructor
  // // Constructor from c_string: 
  // String (char* my_c_string);
  // // Destructor: 
  // ~String();
  // // Get Id: 
  // int getId(); 
  // //C_str() function that return the pointer to the first element in the array of the c-style string 
  // // It necessary the char* and not the char because we are passing an array that and
  // //with a \0 e not a singol character so we need to pass a pointer
  // const char* c_str() const; 
  // //Size: function that return the size of the string
  // size_t size() const;
  // clear();

  //-------------------------------------------- STUDENT B  ------------------------------------------------ //
  
  
  // size_t length() const;
  // size_t max_size() const;
  // void resize(size_t n, char c = '\0');

  // capacity();
  // empty();
  
  
  // operator=(const char*);
  // String& operator=(const String& other);
  // operator=(char);
  
  // operator+(const string&, const string&);
  // friend String operator+(const string& lhs, char rhs); //It is a free function, I add friend to access the data members 
  // operator+(const string&, const char*);


  //-------------------------------------------- STUDENT c  ------------------------------------------------ //

}; 

#endif 

#ifndef STRING_H
#define STRING_H

#include <cstddef> //for size_t

class String {
  private: 
  char* data_; 
  size_t size_; 
  size_t capacity_;
  int id; 

  void reserve(size_t new_capacity); //It is useful when we have to increase the capacity of dynamic array

  public:

  // Default constructor: 
  String(); 
  // Copy constructor:
  String (String& str_to_copy);
  // Constructor from c_string: 
  String (char* my_c_string);
  // Destructor: 
  ~String();
  // Get Id: 
  int getId(); 
  //C_str() function that return the pointer to the first element in the array of the c-style string 
  // It necessary the char* and not the char because we are passing an array that and
  //with a \0 e not a singol character so we need to pass a pointer
  const char* c_str() const; 
  //Size: function that return the size of the string
  size_t size() const;
  
  
  clear();
  
  
  size_t length() const;
  size_t max_size() const;
  void resize(size_t n, char c = '\0');

  capacity();
  empty();
  
  
  operator=(const char*);
  String& operator=(const String& other);
  operator=(char);
  
  operator+(const string&, const string&);
  friend String operator+(const string& lhs, char rhs); //It is a free function, I add friend to access the data members 
  operator+(const string&, const char*);

}; 

#endif 

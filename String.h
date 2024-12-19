#ifndef STRING_H
#define STRING_H

#include <cstddef> //for size_t

class String {
  private: 
  char* data_; 
  size_t size_; 
  size_t capacity_;

  void reserve(size_t new_capacity); //It is useful when we have to increase the capacity of dynamic array

  public:
  
  String (String& str_to_copy);
  String (char* my_c_string);
  ~String();
  
  c_str();
  size();
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
  friend String operator+(const string&, char); //It is a free function, I add friend to access the data members 
  operator+(const string&, const char*);

}; 

#endif 

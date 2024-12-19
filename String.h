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
  reserve(size_t);
  
  operator=(const char*);
  operator=(const string&);
  operator=(char);
  
  operator+(const string&, const string&);
  operator+(const string&, char);
  operator+(const string&, const char*);

}; 

#endif 

#ifndef STRING_H
#define STRING_H

#include <cstddef> //for size_t

class String {
  private: 
  char* data_; 
  size_t size_; 
  size_t capacity_;

  public:
  
  String (String& str_to_copy);
  String (char* my_c_string);
  ~String();
  
  c_str();
  size();
  clear();
  
  
  length();
  max_size();
  resize(size_t, char);

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

#include "String.h"
#include <iostream> 

//Constructor from c-string 
String::String(const char* my_c_string) {
	size_ = 0; 
	while (my_c_string[size_] != 0) size_++; 
	capacity_ = size_ + 1; 
	data_ = new char[capacity_]
	for (size_t i = 0; i < size_; i++) {
		data_[i] = my_c_string[i]; 
	}
	data_[size_] = '\0'; 
}

//Length Method
size_t String::length() const {
	return size_; 
}

//Max_size Method
size_t String::max_size() const {
	return 100; 
}



String::~String(){
  delete [] data_;
  }

int String:: length() {
  return size_;
}

void String::empty() {
  delete [] data_;
  data_ = new char[capacity];
}

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

//Reserve Method
void String::reserve(size_t new_capacity) {
	if (new_capacity <= capacity_) return; 

	// Allocating the new array with the new capacity
	char* new_data = new char[new_capacity];
	// Coping the old data into new array
	for (size_t i = 0; i < size_; ++i) {
		new_data[i] = data_[i]; 
	}
	// Free the memory
	delete[] data_; 
	// Upload the pointer and the capacity
	data_ = new_data; 
	capacity_ = new_capacity; 
}

//Length Method
size_t String::length() const {
	return size_; 
}

//Max_size Method
size_t String::max_size() const {
	return 100; 
}

//Resize Method 
void resize(size_t n, char c) {
	if (n < size_) {
		size_ = n; 
	} else if (n > size_) {
		if (n >= capacity_) {
			reserve(n+1); 
		}

		for (size_t i = size_; i < n; i++) {
			data_[i] = c; 
		}
	}
	size_ = n; 
	data_[size_] = '\0';
}

// Operator=(const String&)

String& String::operator=(const String& other) {
	if (this == &other) return *this; //Control self-assignment 

	delete[] data_; // Free the memory

	// Coping other data
	size_ = other.size_; 
	capacity_ = other.capacity_; 
	data_ = new char[capacity_]; 
	for (size_t i = 0; i < size_; ++i) {
		data_[i] = other.data_[i]; 

	}

	data_[size_] = '\0'; // Adding the null-terminator

	return *this;
}




String::~String(){
  delete [] data_;
  }


void String::empty() {
  delete [] data_;
  data_ = new char[capacity];
}

#include "String.h"
#include <iostream> 

//Inizialization of the id at 1
static int currentID = 1; 

int String::getId(){
	return id; 
}

//Definition of the default constructor: 
String::String() {
	data_[0] = 'H';
	data_[1] = 'e';
    data_[2] = 'l';
    data_[3] = 'l';
    data_[4] = 'o';
    data_[5] = ' ';
    data_[6] = 'W';
    data_[7] = 'o';
    data_[8] = 'r';
    data_[9] = 'l';
    data_[10] = 'd';
    data_[11] = '\0'; 

	id = currentID++; // increment the id 

	size_ = 0; 
	while (data_[size_] != '\0') {
		size_++;
	}
}

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
//C_str(): function that return the pointer to an array (c-string)
    const char* String::c_str() const {
    return data_; // Restituisce il puntatore all'array di caratteri
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

//Size Method
size_t String::size() const {
	return size_
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

// Operator+(const String& lhs, char rhs)
String operator+(const String& lhs, char rhs) {

	String result("") // Making a new object for the result
	result.size_ = lhs.size_ + 1; // Stabilising new length (lhs + char)
	result.capacity_ = result.size_ + 1; // Stabilising new character 
	result.data_ = new char[result.capacity_]; // Allocating new space for the data 
	// Coping lhs data in result data
	for (size_t i = 0; i < lhs.size_; ++i) {
		result.data_[i] = lhs.data_[i]; 
	}
	// Adding rhs character iin the end
	result.data_[lhs.size_] = rhs; 
	// Null-terminator to keep the correct string 
	result.data_[result.size_] = '\0'; 
	
	return result;
}


String::~String(){
  delete [] data_;
  }


void String::empty() {
  delete [] data_;
  data_ = new char[capacity];
}

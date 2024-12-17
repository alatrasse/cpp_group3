#include "String.h"
#include <iostream> 

//Constructor from c-string 
String::String(const char* my_c_string) {
	size = 0; 
	while (my_c_string[size] != 0) size++; 
	capacity = size + 1; 
	data = new char[capacity]
	for (size_t i = 0; i < size; i++) {
		data[i] = my_c_string[i]; 
	}
	data[size] = '\0'; 
}




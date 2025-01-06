#include "String.h"
#include <iostream> 
//-------------------------------------------- STUDENT A ------------------------------------------------ //

    //Inizialization of the id at 1
    static int currentID = 1;

    int String::getId(){
    return id;
    }

   //Definition of the default constractur that inizializes the
   //string to "Hello World"
   String::String() {

    capacity_ = 12;
    data_ = new char[capacity_];

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

    id= currentID++; //increment the id

    size_ = 0; // inizialization of the size
    //while cicle to calculate the size
    while (data_[size_] != '\0') {
        size_++;
    }
    }


    //Copy constructor: create an object equal to another
    String::String(String& other) {

    id=currentID;

    //copy of the size 
    size_ = other.Size(); 

    //copy of the capacity 
    capacity_ = other.capacity_;

    //new allocation
     data_ = new char[capacity_];

    const char* otherData_ = other.c_str(); 
    for (int i = 0; i < size_; i++) {
        data_[i] = otherData_[i]; // Copia dei dati
     }
      data_[size_] = '\0';
   } 

   //C_str(): function that return the pointer to an array (c-string)
    const char* String::c_str() const {
    return data_; // Restituisce il puntatore all'array di caratteri
     } 

    // Function that get the size value without recalculating
    size_t String::getSize() const {
    return size_;
    }

    // Function that update the size value
    void String::setSize(size_t newSize) {
    size_ = newSize;
    }

     // General function for size 
    size_t String::Size(){
    size_t newSize = 0;
    size_t size_=getSize();

    // Calculation of the current size value
    while (data_[newSize] != '\0') {
        newSize++;
    }

    // If size is different --> call of setSize
    if (newSize != size_) {
        setSize(newSize);
    }

    return getSize();
    }

   //Clear: function that clear the string
   void String::clear() {
    data_[0] = '\0'; //set the first character to terminator \0 value
   }


   //Operator(char): function that substitute the intere string with only a char that choose the user 
   void String::operator=(char c) {
    data_[0]= c; //input char 
    data_[1]='\0'; //terminator value 
	}


    // Operator that concatenates a C-style string with a string
    String String::operator+(const char* cstr) const { 

    String newObj; //new object

    // Copy the string of the input object
    int i = 0; 
    while (data_[i] != '\0' && i < 100) {
        newObj.data_[i] = data_[i];
        i++;
    }

    // Concatenation
    int j = 0;
    while (cstr[j] != '\0' && i < 99) { // Assicura di non sforare il limite
        newObj.data_[i] = cstr[j];
        i++;
        j++;
    }
    newObj.data_[i] = '\0'; // Aggiunge il terminatore '\0'

    return newObj;
    } 




// //-------------------------------------------- STUDENT B ------------------------------------------------ //
//Constructor from c-string 
String::String(const char* my_c_string) {
	size_ = 0; 
	while (my_c_string[size_] != '\0') size_++; 
	capacity_ = size_ + 1; 
	data_ = new char[capacity_];
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
void String::resize(size_t n, char c) {
    if (n < size_) {
        
        size_ = n;
    } else if (n > size_) {
        
        if (n >= capacity_) {
            reserve(n + 1); 
        }
        
        for (size_t i = size_; i < n; ++i) {
            data_[i] = c;
        }
        size_ = n;
    }
    data_[size_] = '\0';
}


/// Operator=(const String&)

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

	String result(""); // Making a new object for the result
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

// // //-------------------------------------------- STUDENT C ------------------------------------------------ //
// String::~String(){
//   delete [] data_;
//   }
  
// size_t String::capacity() const {
//   return capacity_ ;
// } 

// bool String::empty() const {
//   bool is_empty = false;
//   if (size_ == 0) {
//     is_empty = true;
//   }
//   else {
//     int c = 0;
//     for (size_t i = 0; i < size_ ; i++) {
//       if (data_[i] != '\0'){
//       c++; 
//       } 
//     }
//     if (c == 0) { is_empty = true;}
      
//   }
//   return is_empty;
// } 
// String& String::operator=(const char* c) {
//    if (c == nullptr) {
//          std::cout << "Null pointer assignment is not allowed.";
//     }
//   delete [] data_;
  
//   size_t length = 0;
//   while(c[length] != '\0') {
//   length++;
//   }
//   size_ = length;
//   capacity_= size_+1;
//   data_ = new char[capacity_];
//   for( size_t i = 0 ; i < size_ ; i++){
//     data_[i] = c[i] ; 
//   }
//   data_[size_] = '\0';
  
//   return *this;
// }

//  String operator+(const String& leftstr, const String& rightstr){
//   size_t Size = leftstr.size_+ rightstr.size_;
//   size_t Capacity = Size + 1;
//  char* Data = new char[Capacity];

//   for (size_t i = 0 ; i<leftstr.size_ ; i++	){
  
//     Data[i] = leftstr.data_[i];
//    }
//    for (size_t i = 0 ; i<rightstr.size_ ; i++	){
  
//     Data[leftstr.size_+i] = rightstr.data_[i];
//    }
//    Data[Size] = '\0';
//    String Concat; 
//    delete[] Concat.data_;
//    Concat.size_ = Size;
//    Concat.capacity_ = Capacity;
//    Concat.data_ = Data;
//    return Concat;
 //}

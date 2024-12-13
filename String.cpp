#include "String.h"

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

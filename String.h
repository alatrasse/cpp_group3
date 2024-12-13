class String {
  
  public:
  
  String (String& str_to_copy);
  String (char* my_c_string);
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

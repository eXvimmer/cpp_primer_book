#include <iostream>
#include <string>

using std::cout;

int main() {
  typedef double wages;   // wages is synonym for double
  typedef wages base, *p; // base is a synonym for wages, p for double*
  using S = std::string;  // C++ 11, S is a synonym for string

  wages hourly, weekly; // same as double hourly, weekly
  S name;

  // confusing stuff with const, pointer and type aliases
  typedef char *pstring;
  const pstring cstr = 0; // cstr is a constant pointer to char
  const pstring *ps;      // ps is a pointer to a constant pointer to char

  return 0;
}

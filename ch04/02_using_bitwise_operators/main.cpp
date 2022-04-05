#include <iostream>

using std::cout;

int main() {
  unsigned long quiz1{0}; // we'll use this value as a collection of bits
  quiz1 |= 1UL << 27;     // student number 27 passed
  quiz1 &= ~(1UL << 27);  // student number 27 failed
  bool status = quiz1 & (1UL << 27); // how did student #27 do?
  cout << "Student #27 " << (status ? "passed" : "failed") << '\n';
}

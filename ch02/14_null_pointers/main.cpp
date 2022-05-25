#include <cstddef>
#include <iostream>

int main() {
  // NOTE: uninitialized pointers are source of run-time errors.
  int *p1{nullptr}; // same as int *p1 = 0;
  int *p2{0};
  int *p3{NULL}; // same as int *p3 = 0;

  // NOTE: Modern C++ programs should generally avoid using NULL and use nullptr
  // instead

  // FIX: segmentation fault
  /* std::cout << "p1: " << p1 << ", *p1: " << *p1 << '\n'; */
  /* std::cout << "p2: " << p2 << ", *p2: " << *p2 << '\n'; */
  /* std::cout << "p3: " << p3 << ", *p3: " << *p3 << '\n'; */

  // NOTE: if possible, define a pointer only after the object to which it
  // should point has been defined. If there's no object to bind to a pointer,
  // then initialize the pointer to `nullptr` or `zero`. That way, the program
  // can detect that the pointer doesn't point to an object.

  return 0;
}

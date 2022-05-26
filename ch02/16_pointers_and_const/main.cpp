#include <iostream>

int main() {
  const double pi{3.14};
  // double *ptr{&pi}; // ERROR: ptr is a plain pointer and pi is a const double
  const double *cptr{&pi}; // OK
  // *cptr = 9.0; // ERROR: pi is readonly

  double dval{9.0};
  cptr = &dval; // OK: cptr is not 'const double *const' so we can reassign it,
                // but cannot change dval through cptr, because cptr is 'const
                // double *'

  return 0;
}

#include <iostream>

int main() {
  int err_num{0};
  int *const pCurErr{&err_num}; // will always point to err_num;

  const double pi{3.1415926832};
  const double *const pPi{&pi}; // a const pointer to a const object

  return 0;
}

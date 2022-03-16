#include <iostream>

using std::cout;

int main() {
  /* NOTE:
   * A reference is not an object. Hence, we may not have a pointer to a
   * reference. However, because a pointer is an object, we can define a
   * reference to a pointer:
   */

  int i{13};
  cout << "i: " << i << '\n';
  int *p;
  cout << "p: " << p << '\n'; // junk
  int *&r = p;                // r is a reference to the pointer p
  cout << "r: " << r << '\n';
  r = &i;
  cout << "p: " << p << '\n'; // junk
  cout << "r: " << r << '\n';
  *r = 0;
  cout << "i: " << i << '\n';
  cout << "*p: " << *p << '\n';
  cout << "*r: " << *r << '\n';

  return 0;
}

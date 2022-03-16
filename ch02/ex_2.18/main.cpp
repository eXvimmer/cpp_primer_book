/* Exercise 2.18: Write code to change the value of a pointer. Write code to
 * change the value to which the pointer points.
 */

#include <iostream>

using std::cout;

int main() {
  int i{13}, *pInt{&i}, o{9};

  cout << "i: " << i << '\n';
  cout << "pInt: " << pInt << '\n';
  cout << "*pInt: " << *pInt << '\n';

  pInt = &o;
  cout << "pInt: " << pInt << '\n';
  cout << "*pInt: " << *pInt << '\n';

  return 0;
}

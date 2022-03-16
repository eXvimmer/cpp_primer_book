#include <iostream>

using std::cout;

int main() {
  int i = 13, *pInt = &i, **ppInt = &pInt;

  // NOTE: you can continue: ***pppInt: pointer to a pointer to pointer

  cout << "i: " << i << '\n';
  cout << "pInt: " << pInt << '\n';
  cout << "ppInt: " << ppInt << '\n';
  cout << "*pInt: " << *pInt << '\n';
  cout << "*ppInt: " << *ppInt << '\n';
  cout << "**ppInt: " << **ppInt << '\n';

  return 0;
}

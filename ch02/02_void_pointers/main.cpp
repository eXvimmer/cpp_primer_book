#include <iostream>

using std::cout;

int main() {
  // NOTE: void* can hold the address of any type
  double obj{3.14}, *pDouble{&obj};

  void *pVoid{&obj};

  cout << "obj: " << obj << " & pDouble: " << pDouble << '\n';
  cout << "*pDouble: " << *pDouble << " & pVoid: " << pVoid << '\n';
  /* cout << "*pVoid: " << *pVoid << '\n'; */
  pVoid = pDouble;
  cout << "*pDouble: " << *pDouble << " & pVoid: " << pVoid << '\n';

  /* NOTE:
   * There are only a limited number of things we can do with a void* pointer:
   * We can compare it to another pointer, we can pass it to or return it from
   * a function, and we can assign it to another void* pointer. We cannot use a
   * void* to operate on the object it addresses—we don’t know that object’s
   * type, and the type determines what operations we can perform on the
   * object. Generally, we use a void* pointer to deal with memory as memory,
   * rather than using the pointer to access the object stored in that memory.
   */

  return 0;
}

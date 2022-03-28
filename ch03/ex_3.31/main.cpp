#include <cstddef>
#include <iostream>

using std::cout;

int main() {
  // Exercise 3.31: Write a program to define an array of ten ints. Give each
  // element the same value as its position in the array.

  int arr[10]{};

  /* for (size_t i{0}; i < 10); i++) { */
  /* for (size_t i{0}; i < sizeof(arr) / sizeof(arr[0]); i++) { */
  for (size_t i{0}; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = i;
  }

  for (auto i : arr) {
    cout << i << ' ';
  }
  cout << '\n';

  return 0;
}

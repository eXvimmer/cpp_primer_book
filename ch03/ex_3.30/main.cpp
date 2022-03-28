#include <cstddef>
#include <iostream>

using std::cout;

int main() {
  constexpr size_t array_size = 10;
  int ia[array_size];

  for (size_t ix = 1; ix <= array_size; ++ix) {
    // NOTE: 👆 1: <= will cause out of range assignment (buffer overflow?)
    ia[ix] = ix; // NOTE: 👈 2: int and size_t are not compatible (overflow)
  }

  for (auto i : ia) {
    cout << i << ' ';
  }

  return 0;
}

#include <iostream>

using std::cout;

bool isEven(int i) { return i % 2 == 0; }

int main() {
  for (unsigned i{0}; i < 20; i++) {
    cout << i << ": " << (isEven(i) ? "even" : "odd") << '\n';
  }
  return 0;
}

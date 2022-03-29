#include <iostream>

using std::cout;

int main() {
  const char ca[]{'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
  const char *cp{ca};

  while (*cp) {
    cout << *cp;
    ++cp;
  }

  cout << '\n';

  return 0;
}

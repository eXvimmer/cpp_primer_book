#include <iostream>

using std::cout;

int reused{42};

int main() {
  int unique{0};
  cout << reused << ' ' << unique << '\n';

  int reused{0};
  cout << reused << ' ' << unique << '\n';

  // NOTE: explicitly requests the global reused; prints 42 0
  cout << ::reused << " " << unique << '\n';

  return 0;
}

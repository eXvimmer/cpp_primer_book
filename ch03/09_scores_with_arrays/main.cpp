#include <iostream>

using std::cin;
using std::cout;

int main() {
  unsigned scores[11]{};
  unsigned grade{};

  while (cin >> grade) {
    if (grade <= 100) {
      ++scores[grade / 10];
    }
  }

  cout << "[ ";
  for (auto i : scores) {
    cout << i << ' ';
  }
  cout << "]\n";

  return 0;
}

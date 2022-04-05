#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

  for (int &i : vec) {
    i = (i % 2 == 0) ? i : i * 2;
  }

  cout << "[ ";
  for (int &i : vec) {
    cout << i << ' ';
  }
  cout << "]\n";

  return 0;
}

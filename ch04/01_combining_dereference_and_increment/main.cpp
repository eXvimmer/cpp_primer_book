#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  // print the values in a vector up to but not including the first negative
  // value
  vector<int> v{0, 4, 9, 1, 2, 3, -1, 7, 9, 8, 70};
  auto pbeg{v.begin()};

  while (pbeg != v.end() && *pbeg >= 0)
    cout << *pbeg++ << '\n'; // print the current value and advance pbeg

  // NOTE: *pbeg++ is equivalent to *(pbeg++)

  return 0;
}

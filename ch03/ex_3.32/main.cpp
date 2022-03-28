#include <cstddef>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  int arr[11]{};

  for (size_t i{0}; i < (sizeof(arr) / sizeof(*arr)); ++i) {
    arr[i] = i;
  }

  cout << "arr:\n\t";
  for (auto i : arr) {
    cout << i << ' ';
  }
  cout << '\n';

  // Exercise 3.32: Copy the array you defined in the previous exercise into
  // another array.Rewrite your program to use vectors.

  int copied[11]{};

  for (size_t i{0}; i < (sizeof(arr) / sizeof(*arr)); ++i) {
    copied[i] = arr[i];
  }

  cout << "copied:\n\t";
  for (auto i : copied) {
    cout << i << ' ';
  }
  cout << '\n';

  vector<int> vec{};

  for (auto i : arr) {
    vec.push_back(i);
  }

  cout << "vec:\n\t";
  for (auto i : vec) {
    cout << i << ' ';
  }
  cout << '\n';

  return 0;
}

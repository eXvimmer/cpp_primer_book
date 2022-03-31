#include <cstddef>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arr[vec.size()];

  for (size_t i{0}; i < vec.size(); ++i) {
    arr[i] = vec[i];
  }

  cout << "[ ";
  for (int i : vec) {
    cout << i << ' ';
  }
  cout << "]\n";

  cout << "[ ";
  for (int i : arr) {
    cout << i << ' ';
  }
  cout << "]\n";

  return 0;
}

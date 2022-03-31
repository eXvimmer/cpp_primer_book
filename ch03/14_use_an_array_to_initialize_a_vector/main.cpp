#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::vector;

int main() {
  int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> vec(std::begin(arr), std::end(arr));

  cout << "[ ";
  for (int i : arr) {
    cout << i << ' ';
  }
  cout << "]\n";

  cout << "[ ";
  for (int i : vec) {
    cout << i << ' ';
  }
  cout << "]\n";

  vector<int> vec2(arr + 1, arr + 4); // 3 elements, arr[1] to arr[4]

  cout << "[ ";
  for (int i : vec2) {
    cout << i << ' ';
  }
  cout << "]\n";

  return 0;
}

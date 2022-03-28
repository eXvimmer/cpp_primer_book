#include <iostream>
#include <iterator>

using std::begin;
using std::cout;
using std::end;

int main() {
  // Exercise 3.35: Using pointers, write a program to set the elements in an
  // array to zero.

  // First solution
  int arr[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto i : arr) {
    cout << i << ' ';
  }
  cout << '\n';

  int *pBegin{begin(arr)};
  int *pEnd{end(arr)};

  for (; pBegin != pEnd; ++pBegin) {
    *pBegin = 0;
  }

  for (auto i : arr) {
    cout << i << ' ';
  }
  cout << '\n';

  // second solution
  int arr2[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto i : arr2) {
    cout << i << ' ';
  }
  cout << '\n';

  int *pFirst{arr2};
  int *pOffEnd{arr2 + sizeof(arr2) / sizeof(*arr)};

  for (; pFirst != pOffEnd; ++pFirst) {
    *pFirst = 0;
  }

  for (auto i : arr2) {
    cout << i << ' ';
  }
  cout << '\n';

  return 0;
}

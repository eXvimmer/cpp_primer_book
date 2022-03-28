#include <iostream>
#include <iterator>

using std::cout;

int main() {
  int arr[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *pBeg{std::begin(arr)};
  int *pEnd{std::end(arr)};
  // NOTE: you may not dereference or increment an off-the-end pointer

  while (pBeg != pEnd && *pBeg >= 0) {
    cout << *pBeg << ' ';
    pBeg++;
  }
  cout << '\n';

  return 0;
}

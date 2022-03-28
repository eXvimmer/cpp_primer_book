#include <iostream>

using std::cout;

int main() {
  int a[]{0, 2, 4, 6, 8};
  int last{*(a + 4)}; // same as a[4]

  cout << last << '\n';

  int i{a[2]}; // same as (a + 2) -- 4
  int *p{a};   // points to the first element

  i = *(p + 2); // same as i = i[2]

  int *p2{&a[2]};
  int j{p[1]}; // j points to *(p + 1), p[1] is the same element as a[3]

  int k{p[-2]}; // same as a[0]

  // NOTE: unlike subscriptors for vector and string, the index of the built-in
  // subscript operator  is not an unsigned type.

  return 0;
}

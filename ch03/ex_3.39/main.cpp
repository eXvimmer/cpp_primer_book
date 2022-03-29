#include <algorithm>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>

using std::cout;
using std::string;

// Compare two arrays for equality
template <typename T, int m, int n> bool isEqual(T (&)[m], T (&)[n]);

int main() {
  // string objects
  string s1{"Mustafa"};
  string s2{"Hayati"};

  if (s1 == s2) {
    cout << "s1 and s2 are equal\n";
  } else {
    cout << "s1 and s2 are not equal\n";
  }

  // C-style strings
  const char cs1[]{'l', 'o', 'v', 'e'};
  const char cs2[]{'l', 'o', 'v', 'e'};

  if (isEqual(cs1, cs2)) {
    cout << "cs1 and cs2 are equal\n";
  } else {
    cout << "cs1 and cs2 are not equal\n";
  }

  // or

  if (std::equal(std::begin(cs1), std::end(cs1), std::begin(cs2))) {
    cout << "cs1 and cs2 are equal\n";
  } else {
    cout << "cs1 and cs2 are not equal\n";
  }

  // or

  int r{strcmp(cs1, cs2)};

  if (r == 0) {
    cout << "cs1 and cs2 are equal\n"; // Yo, WTF? (read the note below)
  } else {
    cout << "cs1 and cs2 are not equal\n";
  }

  // NOTE: The pointer(s) passed to these routines (C library string functions)
  // must point to null-terminated array(s)

  const char cs3[]{'l', 'o', 'v', 'e', '\0'};
  const char cs4[]{'l', 'o', 'v', 'e', '\0'};

  int res{strcmp(cs3, cs4)};

  if (res == 0) {
    cout << "cs3 and cs4 are equal\n"; // Yay!!!
  } else {
    cout << "cs3 and cs4 are not equal\n";
  }

  return 0;
}

template <typename T, int m, int n>
bool isEqual(T (&first)[m], T (&second)[n]) {
  if (m != n)
    return false;

  for (std::size_t i{0}; i < m; ++i) {
    if (first[i] != second[i]) {
      return false;
    }
  }

  return true;
}

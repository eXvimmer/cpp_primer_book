#include <cstddef>
#include <iostream>
#include <vector>

template <typename T, int m, int n>
bool isEqual(T (&first)[m], T (&second)[n]) {
  if (m != n)
    return false;

  for (size_t i{0}; i < m; ++i) {
    if (first[i] != second[i])
      return false;
  }

  return true;
}

int main() {
  int a1[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int a2[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int a3[11]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> v1{1, 2, 3};
  std::vector<int> v2{1, 2, 3};
  std::vector<int> v3{1, 2, 3, 9};

  if (isEqual(a1, a2)) {
    std::cout << "a1 and a2 are equal\n";
  } else {
    std::cout << "Arrays are not equal\n";
  }

  if (isEqual(a1, a3)) {
    std::cout << "a1 and a3 are equal\n";
  } else {
    std::cout << "Arrays are not equal\n";
  }

  if (v1 == v2) {
    std::cout << "v1 and v2 are equal\n";
  } else {
    std::cout << "v1 and v2 are not equal\n";
  }

  if (v1 == v3) {
    std::cout << "v1 and v3 are equal\n";
  } else {
    std::cout << "v1 and v3 are not equal\n";
  }

  return 0;
}

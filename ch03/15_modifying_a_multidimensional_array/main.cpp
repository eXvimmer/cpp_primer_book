#include <iostream>

using std::cout;

template <typename T, int m, int n> bool isEqual(T (&)[m], T (&)[n]);

int main() {
  constexpr std::size_t rowCnt{3}, colCnt{4};

  int arr1[rowCnt][colCnt]; // 3 x 4

  for (std::size_t i{0}; i < rowCnt; ++i) {
    for (std::size_t j{0}; j < colCnt; ++j) {
      arr1[i][j] =
          i * colCnt + j; // assign the element's positional index as it's value
    }
  }

  // same as before using a range for
  int arr2[rowCnt][colCnt];

  std::size_t cnt{0};
  for (auto &row : arr2) {
    for (auto &col : row) {
      col = cnt;
      ++cnt;
    }
  }

  cout << std::boolalpha;
  // spreaded arrays
  cout << "arr1: [";
  for (auto &row : arr1) {
    for (auto &col : row) {
      cout << col << ' ';
    }
  }
  cout << "]\n";

  cout << "arr2: [";
  for (auto &row : arr2) {
    for (auto &col : row) {
      cout << col << ' ';
    }
  }
  cout << "]\n";

  for (std::size_t i{0}; i < (sizeof(arr1) / sizeof(*arr1)); ++i) {
    cout << "arr1[" << i << "] == arr2[" << i << "] ? ";
    if (isEqual(arr1[i], arr2[i])) {
      cout << true << '\n';
    } else {
      cout << false << '\n';

      cout << "[";
      for (auto a : arr1[i]) {
        cout << a << ' ';
      }
      cout << "]\n";

      cout << "[";
      for (auto b : arr2[i]) {
        cout << b << ' ';
      }
      cout << "]\n";
    }
  }

  return 0;
}

template <typename T, int m, int n>
bool isEqual(T (&first)[m], T (&second)[n]) {
  if (m != n) {
    return false;
  }

  for (std::size_t i{0}; i < m; i++) {
    if (first[i] != second[i])
      return false;
  }

  return true;
}

#include <cstddef>
#include <iostream>

using std::cout;

int main() {
  constexpr std::size_t row{3}, col{4};
  int ia[row][col]{
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };

  cout << "[ ";
  for (const int(&p)[col] : ia) {
    cout << "{ ";
    for (const int i : p) {
      cout << i << ' ';
    }
    cout << "}, ";
  }
  cout << "\b\b ]\n";

  cout << "[ ";
  for (std::size_t i{0}; i < row; ++i) {
    cout << "{ ";
    for (std::size_t j{0}; j < col; ++j) {
      cout << ia[i][j] << ' ';
    }
    cout << "}, ";
  }
  cout << "\b\b ]\n";

  cout << "[ ";
  for (int(*pr)[col]{ia}; pr != ia + row; ++pr) {
    cout << "{ ";
    for (int *pc{*pr}; pc != *pr + col; ++pc) {
      cout << *pc << ' ';
    }
    cout << "}, ";
  }
  cout << "\b\b ]\n";

  cout << "[ ";
  for (int(*pr)[col]{std::begin(ia)}; pr != std::end(ia); ++pr) {
    cout << "{ ";
    for (int *pc{*pr}; pc != *pr + col; ++pc) {
      cout << *pc << ' ';
    }
    cout << "}, ";
  }
  cout << "\b\b ]\n";

  return 0;
}

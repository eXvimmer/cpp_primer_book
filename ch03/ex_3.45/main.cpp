// Exercise 3.45: Rewrite the programs again, this time using auto.

#include <cstddef>
#include <iostream>
#include <iterator>

using std::cout;

int main() {
  constexpr std::size_t row{3}, col{4};
  int ia[row][col] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  cout << "[ ";
  for (const auto &r : ia) {
    cout << "{ ";
    for (const auto i : r) {
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
  for (auto i{ia}; i != ia + row; i++) {
    cout << "{ ";
    for (auto j{*i}; j != *i + col; ++j) {
      cout << *j << ' ';
    }
    cout << "}, ";
  }
  cout << "\b\b ]\n";

  cout << "[ ";
  for (auto p{std::begin(ia)}; p != std::end(ia); ++p) {
    cout << "{ ";
    for (auto i{*p}; i != *p + col; ++i) {
      cout << *i << ' ';
    }
    cout << "}, ";
  }
  cout << "\b\b ]\n";

  return 0;
}

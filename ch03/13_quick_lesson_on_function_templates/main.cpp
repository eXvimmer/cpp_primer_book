#include <iostream>

using std::cout;

template <typename T> T max(T, T);
template <typename T, typename U> auto max2(T, U);

// C++20
/* auto max3(auto x, auto y) { return (x > y) ? x : y; } */

int main() {
  cout << "which one is greater, 4 or 9 ? " << max<int>(4, 9) << '\n';
  cout << "which one is greater, 4 or 9 ? " << max<>(4, 9) << '\n';
  cout << "which one is greater, 4 or 9 ? " << max(4, 9) << '\n';
  // cout << "which one is greater, 4 or 9 ? " << max(4, 9.0) << '\n'; // error
  cout << "which one is greater, 4 or 9 ? " << max<double>(4, 9.0) << '\n';
  /* cout << "which one is greater, 4 or 9 ? " << max2(4, 9.0) << '\n'; */

  return 0;
}

template <typename T> T max(T x, T y) { return (x > y) ? x : y; }

template <typename T, typename U> auto max2(T x, U y) {
  return (x > y) ? x : y;
}

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
  int n{};

  cout << "Enter a sequence of numbers. (Press ctrl-d when you're done.)\n";

  vector<int> vec{};

  while (cin >> n) {
    vec.push_back(n);
  }

  cout << "your entries are:\n[ ";
  for (const int i : vec) {
    cout << i << ' ';
  }
  cout << "]\n";

  return 0;
}

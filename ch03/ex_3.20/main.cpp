#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
  // Exercise 3.20: Read a set of integers into a vector. Print the sum of each
  // pair of adjacent elements. Change your program so that it prints the sum
  // of the first and last elements, followed by the sum of the second and
  // second-to-last, and so on.
  vector<int> vec{};
  int n{};

  cout << "Enter a series of integers separated by space or new lines.\n(Hit "
          "enter when you're done)\n";

  while (cin >> n) {
    vec.push_back(n);
  }

  cout << "Your entries are: "
       << "\n[ ";
  for (int n : vec) {
    cout << n << ' ';
  }
  cout << "]\n";

  vector<long long> sum_adj{};
  short i{1};
  long long s{0};

  for (int n : vec) {
    if (i > 2) {
      i = 1;
      sum_adj.push_back(s);
      s = 0;
    }
    s += n;
    i++;
  }
  sum_adj.push_back(s);

  cout << "The sum of each pair of adjacent elements is:\n";
  cout << "[ ";
  for (auto n : sum_adj) {
    cout << n << ' ';
  }
  cout << "]\n";

  // NOTE: this is answer is copied from the source
  auto end{vec.size()};
  cout << "Sum of elements at extreme ends:";
  for (decltype(vec.size()) i = 0; i < end / 2; ++i)
    cout << ' ' << vec[i] + vec[end - 1 - i];
  cout << '\n';
}

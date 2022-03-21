#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  string s{};

  cout << "Enter a sequence of strings separated by a space. (Press ctrl-d "
          "when you're done.)\n";

  vector<string> vec{};

  while (cin >> s) {
    vec.push_back(s);
  }

  cout << "your entries are:\n[ ";
  for (const string &i : vec) {
    cout << i << ' ';
  }
  cout << "]\n";

  return 0;
}

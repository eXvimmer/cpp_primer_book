#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string s{"Hello, world!!!"};

  for (auto &c : s) {
    c = std::toupper(c);
  }
  cout << s << '\n';
  return 0;
}

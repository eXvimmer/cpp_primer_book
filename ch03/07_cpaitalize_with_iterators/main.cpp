#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string s{"some string"};
  cout << s << '\n';

  if (s.begin() != s.end()) { // make sure s is not empty
    auto it = s.begin();
    *it = std::toupper(*it);
  }

  cout << s << '\n';
}

#include <iostream>
#include <string>

using std::cout;
using std::isspace;
using std::string;
using std::toupper;

int main() {
  string s{"some string"};

  if (!s.empty()) {
    s[0] = toupper(s[0]);
  }
  cout << s << '\n';

  s = "another string";

  for (decltype(s.size()) i{0}; i != s.size() && !isspace(s[i]); ++i) {
    s[i] = toupper(s[i]);
  }

  cout << s << '\n';
  return 0;
}

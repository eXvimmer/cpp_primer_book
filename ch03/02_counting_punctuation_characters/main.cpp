#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string s{"Hello, World!!!"};
  decltype(s.size()) punct_count{0};

  for (auto c : s) {
    if (std::ispunct(c)) {
      punct_count++;
    }
  }

  cout << punct_count << " punctuation character"
       << (punct_count == 1 ? "" : "s") << " in " << s << '\n';

  return 0;
}

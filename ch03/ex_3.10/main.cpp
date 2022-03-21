#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string s{"punc; hello. oh!!! world:\t\nwhat's up?@!#$^&is removed^&*("};
  cout << s << '\n';
  string res{};

  cout << "\nAfter cleaning up ==================================\n\n";

  for (const auto c : s) {
    if (std::ispunct(c))
      continue;

    res += c;
  }

  cout << res << '\n';

  return 0;
}

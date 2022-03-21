#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string s{"Mustafa Hayati"};
  const auto sz{s.size()};

  cout << s << '\n';

  decltype(s.size()) i{0};

  while (i < sz) {
    s[i] = 'X';
    i++;
  }

  cout << s << '\n';

  s = "Mustafa Hayati";
  cout << s << '\n';

  for (i = 0; i < sz; i++) {
    s[i] = 'X';
  }
  cout << s << '\n';

  return 0;
}

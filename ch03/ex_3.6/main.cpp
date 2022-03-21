#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string s{"Mustafa Hayati"};
  cout << s << '\n';

  for (char &c : s) {
    c = 'X';
  }

  cout << s << '\n';

  return 0;
}

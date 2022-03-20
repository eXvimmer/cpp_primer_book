#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
  string line;

  while (std::getline(cin, line)) {
    if (!line.empty())
      cout << line << '\n';
  }

  return 0;
}

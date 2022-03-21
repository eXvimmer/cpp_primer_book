#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
  const string hexdigits{"0123456789ABCDEF"};

  cout << "Enter a series of numbers between 0 and 15, separated by spaces. "
          "(Press ctrl-d when you finished):\n";

  string::size_type n;
  string result{};

  while (cin >> n) {
    if (n < hexdigits.size()) {
      result += hexdigits[n];
    } else {
      cout << "\ninvalid input\nEnter a number between 0 and 15\n";
      return -1;
    }
  }

  cout << "Your hex number is: " << result << '\n';

  return 0;
}

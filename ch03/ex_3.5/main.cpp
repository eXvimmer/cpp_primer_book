/*
 * Exercise 3.5: Write a program to read strings from the standard input,
 * concatenating what is read into one large string. Print the concatenated
 * string. Next, change the program to separate adjacent input strings by a
 * space.
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  vector<string> v;
  string s;

  cout << "Enter your favorite strings (stop with ctrl-d):\n";

  while (cin >> s) {
    v.push_back(s);
  }

  s = "";
  for (auto str : v) {
    s += str;
  }

  cout << "Mushed up result:\n\t" << s << '\n';

  s = "";
  for (string str : v) {
    s += str + ' ';
  }
  s += '\n';
  cout << "pretty result:\n\t" << s << '\n';

  return 0;
}

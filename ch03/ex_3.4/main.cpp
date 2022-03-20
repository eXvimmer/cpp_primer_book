/*
 * Exercise 3.4: Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change
 * the program to report whether the strings have the same length, and if not,
 * report which is longer.
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main() {
  string s1, s2;

  cout << "Enter the first string. (Press enter when you're done):\n";
  getline(cin, s1);

  cout << "Enter the second string. (Press enter when you're done):\n";
  getline(cin, s2);

  if (s1 == s2) {
    cout << "The first and second strings are equal.\n";
  } else {
    if (s1.length() == s2.length()) {
      cout << "Both strings have the same length, but they're not equal.\n";
    } else {
      cout << "The longer string is: " << (s1.length() > s2.length() ? s1 : s2)
           << '\n';
    }
  }

  return 0;
}

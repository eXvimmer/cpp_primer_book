#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
  // Exercise 3.17: Read a sequence of words from cin and store the values a
  // vector. After you’ve read all the words, process the vector and change
  // each word to uppercase. Print the transformed elements, eight words to a
  // line.

  vector<string> words{};
  string word{};

  cout << "Please enter a series of strings separated by space or new lines. "
          "\n(Hit ctrl-d when you're done):\n";

  while (cin >> word) {
    words.push_back(word);
  }

  for (string &s : words) {
    for (char &c : s) {
      c = std::toupper(c);
    }
  }

  vector<string>::size_type i{0};

  for (string s : words) {
    if (i % 8 == 0) {
      cout << '\n';
    }
    cout << s << ' ';
    i++;
  }

  cout << std::endl;

  return 0;
}

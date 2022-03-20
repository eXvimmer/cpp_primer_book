#include <string>

using std::string;

int main() {
  string s1{"Hello"}, s2{"world"};
  string s3{s1 + ", " + s2 + '\n'};

  // NOTE: When we mix strings and string or character literals, at least one
  // operand to each + operator must be of string type:

  string s4{s1 + ", "}; // OK: adding a string and a literal
  /* string s5{"Hello" + ", "};      // ERROR: no string operand */
  string s6{s1 + ", " + "world"}; // OK: each plus has a string operand
  /* string s7{"Hello" + ", ", s2};  // ERROR: can't add string literals */

  return 0;
}

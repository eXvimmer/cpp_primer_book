#include <iostream>
#include <string>

using std::cout;
using std::string;

string assesGrade(int g);

int main() {
  for (int i{39}; i <= 100; i += 10) {
    cout << i << " : " << assesGrade(i) << "\n";
  }

  return 0;
}

string assesGrade(int g) {
  string s{(g > 90)    ? "high pass"
           : (g >= 75) ? "pass"
           : (g >= 60) ? "low pass"
                       : "fail"};

  return s;
}

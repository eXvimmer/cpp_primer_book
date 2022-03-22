// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
  vector<unsigned> scores(11, 0);
  unsigned grade{};

  while (cin >> grade) {
    if (grade <= 100) {
      ++scores[grade / 10];
    }
  }

  cout << "[ ";
  for (unsigned g : scores) {
    cout << g << ' ';
  }
  cout << "]\n";

  return 0;
}

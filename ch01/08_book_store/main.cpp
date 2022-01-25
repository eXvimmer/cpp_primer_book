#include "Sales_item.h"
#include <iostream>

using std::cerr;
using std::cin;
using std::cout;

int main() {
  Sales_item total;
  if (cin >> total) {
    Sales_item trans;
    while (cin >> trans) {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        cout << total << "\n";
        total = trans;
      }
    }
    cout << total << "\n";
  } else {
    cerr << "No data?\n";
    return -1;
  }
  return 0;
}

#include "Sales_item.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  Sales_item book;

  while (cin >> book)
    cout << book << endl;

  return 0;
}

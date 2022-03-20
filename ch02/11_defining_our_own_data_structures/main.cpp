#include <iostream>
#include <string>

using std::cout;
using std::string;

struct SalesData {
  string bookNo;
  unsigned unitsSold{0};
  double revenue{0.0};
};

int main() {
  SalesData item{};
  cout << item.bookNo << '\n';
  cout << item.unitsSold << '\n';
  cout << item.revenue << '\n';
}

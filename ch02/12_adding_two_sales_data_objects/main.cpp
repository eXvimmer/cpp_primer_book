#include "SalesData.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
  SalesData data1, data2;

  double price{0};
  cout << "Enter ISBN, units sold and price for book1: ";
  cin >> data1.bookNo >> data1.unitsSold >> price;
  data1.revenue = data1.unitsSold * price;

  cout << "Enter ISBN, units sold and price for book2: ";
  cin >> data2.bookNo >> data2.unitsSold >> price;
  data2.revenue = data2.unitsSold * price;

  if (data1.bookNo == data2.bookNo) {
    unsigned total_count{data1.unitsSold + data2.unitsSold};
    double total_revenue{data1.revenue + data2.revenue};

    cout << data1.bookNo << ' ' << total_count << ' ' << total_revenue << ' ';

    if (total_count != 0)
      cout << total_revenue / total_count;
    else
      cout << "(no sales)";

    cout << std::endl;

    return 0;
  } else {
    std::cerr << "Data must refer to the same ISBN" << std::endl;

    return -1;
  }
}

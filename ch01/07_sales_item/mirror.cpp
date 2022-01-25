#include "mirror.h"
#include <iostream>

using std::istream;
using std::ostream;
using std::string;

SalesItem::SalesItem(const string &book) : mBookNo(book) {}

SalesItem::SalesItem(istream &rIs) { rIs >> *this; }

string SalesItem::isbn() const { return mBookNo; }

double SalesItem::avg_price() const {
  if (mUnitsSold)
    return mRevenue / mUnitsSold;
  else
    return 0;
}

istream &operator>>(istream &rIn, SalesItem &s) {
  double price;
  rIn >> s.mBookNo >> s.mUnitsSold >> price;
  if (rIn)
    s.mRevenue = s.mUnitsSold * price;
  else
    s = SalesItem();
  return rIn;
}

ostream &operator<<(ostream &rOut, const SalesItem &s) {
  rOut << s.isbn() << " " << s.mUnitsSold << " " << s.mRevenue << " "
       << s.avg_price();
  return rOut;
}

bool operator==(const SalesItem &lhs, const SalesItem &rhs) {
  return lhs.mUnitsSold == rhs.mUnitsSold && lhs.mRevenue == rhs.mRevenue &&
         lhs.isbn() == rhs.isbn();
}

inline bool operator!=(const SalesItem &lhs, const SalesItem &rhs) {
  return !(lhs == rhs);
}

SalesItem &SalesItem::operator+=(const SalesItem &rhs) {
  // rhs means right hand side
  mUnitsSold += rhs.mUnitsSold;
  mRevenue += rhs.mRevenue;
  return *this;
}

SalesItem operator+(const SalesItem &lhs, const SalesItem &rhs) {
  SalesItem ret(lhs);
  ret += rhs;
  return ret;
}

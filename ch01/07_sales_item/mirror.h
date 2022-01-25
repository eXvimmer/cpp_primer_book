#include <iostream>
#include <string>

class SalesItem {
  friend std::istream &operator>>(std::istream &, SalesItem &);
  friend std::ostream &operator<<(std::ostream &, const SalesItem &);
  friend bool operator<(const SalesItem &, const SalesItem &);
  friend bool operator==(const SalesItem &, const SalesItem &);

public:
  SalesItem() = default;
  SalesItem(const std::string &);
  SalesItem(std::istream &);

public:
  SalesItem &operator+=(const SalesItem &);

  std::string isbn() const;
  double avg_price() const;

private:
  std::string mBookNo;
  unsigned int mUnitsSold = 0;
  double mRevenue = 0.0;
};

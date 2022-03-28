#include <string>

using std::string;

int main() {
  string nums[]{"one", "two", "three"};
  string *pStr{&nums[0]};
  string *pStr2{nums}; // same as pStr

  int ia[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto ia2(ia);     // conversion: ia2 is a pointer to int
  auto ia3(&ia[0]); // same as ia2

  decltype(ia) ia4{0, 1, 2, 3, 4,
                   5, 6, 7, 8, 9}; // no conversion array of 9 int
}

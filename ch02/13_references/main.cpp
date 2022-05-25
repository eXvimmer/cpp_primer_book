#include <iostream>

// NOTE: When we define a reference, instead of copying the initializer's
// value, we bind the reference to its initializer. Once initialized, a
// reference remains bound to its initial object. There is no way to rebind a
// reference to refer to a different object. Because there is no way to rebind
// a reference, references must be initialized.

int main() {
  int ival{1024};
  int &refVal{ival};
  /* int &refVal2; // error */
  refVal = 2;
  int ii{refVal}; // same as ii = ival;
  std::cout << "ival: " << ival << " refVal: " << refVal << '\n';
  std::cout << "ii: " << ii << '\n';

  // NOTE: When we assign to a reference, we are assigning to the object to
  // which the reference is bound. When we fetch the value of a reference, we
  // are really fetching the value of the object to which the reference is
  // bound. Similarly, when we use a reference as an initializer, we are really
  // using the object to which the reference is bound:
  int &refVal3{refVal}; // refVal3 is bound to ival
  int iii{refVal};      // same as i = ival;

  // NOTE: because references are not objects, we may not define a reference to
  // reference.

  int i{1024}, i2{2048};
  int &r{i}, r2{i2};     // r is a reference, i is an int
  int i3{1024}, &ri{i3}; // i3 is an int, ri is a reference bound to i3
  int &r3{i3}, &r4{i2};  // both are references

  /* int &refVal4{10};      // errorr */
  int m, &rm{m};
  m = 5, rm = 10;
  std::cout << m << ' ' << rm << '\n';
  return 0;
}

#include <iostream>

int main() {
  const int ci{1024};
  const int &r0{ci};

  /* r1 = 42; // ERROR: cannot assign to a 'const int &' */
  /* int &r2{ci}; // ERROR: not const reference to a const object */

  // Initialization and references to const
  int i{42};
  const int &r1{i};      // OK
  const int &r2{13};     // OK
  const int &r3{r1 * 2}; // OK
  /* int &r4{r1 * 2};    // ERROR: r4 is a plain, nonconst reference. */

  int j{13};
  int &r1j{j};
  const int &r2j{j};
  j = 9;   // OK
  r1j = 4; // OK
  /* r2j = 0; // ERROR: r2j is 'const int &'*/

  // NOTE: binding r2j to the (nonconst) j is legal, but we cannot use r2j to
  // change j.
  return 0;
}

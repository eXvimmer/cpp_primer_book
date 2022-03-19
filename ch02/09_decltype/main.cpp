int main() {
  const int ci{0}, &cj{ci};
  decltype(ci) x{0}; // x has type const int (whatever type ci returns)
  decltype(cj) y{x}; // y has type const int& and is bound to x
  /* decltype(cj) z; // ERROR: z is a reference and must be initialized */

  // NOTE: It is worth noting that decltype is the `only` context in which a
  // variable defined as a reference is not treated as a synonym for the object
  // to which it refers.
  return 0;
}

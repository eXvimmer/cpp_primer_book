int main() {
  /* NOTE:
   * We use the term top-level const to indicate that the pointer itself is a
   * const. When a pointer can point to a const object, we refer to that const
   * as a low-level const.
   */

  int i{0};
  int *const p1{&i};       // we cannot change value of p1, const is top-level
  const int ci{13};        // we cannot change ci, const is top-level
  const int *p2{&ci};      // we can change p2, const is low-level
  const int *const p3{p2}; // right-most const is top-level, left-most is not
  const int &r = ci;       // const in reference types is alwasy low-level

  /* NOTE:
   * The distinction between top-level and low-level matters when we copy an
   * object. When we copy an object, top-level consts are ignored
   */

  i = ci;  // OK: copying the value of ci; top-level const in ci is ignored
  p2 = p3; // OK: pointed-to type matches; top-level const in p3 is ignored

  /* NOTE:
   * On the other hand, low-level const is never ignored. When we copy an
   * object, both objects must have the same low-level const qualification or
   * there must be a conversion between the types of the two objects. In
   * general, we can convert a nonconst to const but not the other way round.
   */

  /* int *p = p3; // ERROR: p3 has a low-level const but p doesn't */
  p2 = p3; // OK: p2 has the same low-level const qualification as p3
  p2 = &i; // OK: we can convert int * to const int *
  // int &r2 = ci; // ERROR: can't bind an ordinary int& to a const int object
  const int &r3 = i; // OK: can bind const int& to plain int

  return 0;
}

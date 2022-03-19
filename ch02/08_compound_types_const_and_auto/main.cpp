int main() {
  int i = 0, &r = i;
  auto a = r; // a is an int (r is an alias for i, which has type int)

  // NOTE: auto ordinarily ignores top-level consts; low-level const are kept

  const int ci{i}, &cr{ci};
  auto b{ci};  // b is an int (top-level const in ci is dropped)
  auto c{cr};  // c is an int (cr is an alias for ci, whose const is top-level)
  auto d{&i};  // d is an int* (& of an int object is int*)
  auto e{&ci}; // e is const int* (& of a const object is low-level const)

  // NOTE: if we want to deduced type to have a top-level const, we msut say so
  // explicitly

  const auto f{ci}; // deduced type of f is int; f has type const int

  // NOTE: we can also specify that we want a reference to the auto-deduced
  // type.

  auto &g{ci}; // g is a const int& that is bound to ci
  /* auto &h{42}; // ERROR: we cannot bind a plain reference to a literal */
  const auto &j{42}; // OK: we can bind a const reference to a literal

  // NOTE: when we ask for a reference to an auto-deduced type , top-level
  // consts in the initializer are not ignored. as usual consts are not
  // top-level when we bind a reference to an initializer

  auto k{ci}, &l{i};    // k is int and l is int&
  auto &m{ci}, *p{&ci}; // m is a const int&; p is const int*
  /* auto &n{i}, *p2{&ci}; // ERROR: type deduced from i is int & type deduced
   *                       // from ci is const int
   */
}

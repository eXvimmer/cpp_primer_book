int main() {
  // NOTE: When we apply decltype to an expression that is not a variable, we
  // get the type that that expression yields. Some expressions will cause
  // decltype to yield a reference type. Generally speaking, decltype returns a
  // reference type for expressions that yield `objects` that can stand on the
  // left-hand side of the assignment:

  int i{42}, *p{&i}, &r{i};
  decltype(r + 0) b; // OK: addition yeilds an int; b is an (uninitialized) int

  // NOTE: As we've seen, when we dereference a pointer, we get the object to
  // which the pointer points. Moreover, we can assign to that object. Thus,
  // the type deduced by decltype(*p) is int&, not plain int.

  /* decltype(*p) c;    // ERROR: c is int& and must be initialized */

  // NOTE: Another important difference between decltype and auto is that the
  // deduction done by decltype depends on the form of its given expression.
  // What can be confusing is that enclosing the name of a variable in
  // parentheses affects the type returned by decltype. When we apply decltype
  // to a variable without any parentheses, we get the type of that variable.
  // If we wrap the variable's name in one or more sets of parentheses, the
  // compiler will evaluate the operand as an expression. A variable is an
  // expression that can be the left-hand side of an assignment. As a result,
  // decltype on such an expression yields a reference:

  // NOTE: decltype of parenthesized variable is always a reference
  /* decltype((i)) d; // ERROR: d is int& and must be initialized */
  decltype(i) e; // OK: e is an (uninitialized) int

  // NOTE: Remember that decltype((variable)) (note, double parentheses) is
  // always a reference type, but decltype(variable) is a reference type only if
  // variable is a reference.
}

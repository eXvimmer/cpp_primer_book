int main() {
  int arr[10];
  int *ptrs[10]; // ptrs is an array of 10 pointers to int

  // int &refs[10]; // error: no arrays of references (references are not
  // objects)

  int(*pArray)[10] = &arr; // points to an array of 10 ints
  int(&rArray)[10] = arr;  // referes to an array of 10 ints
  // NOTE: 👆 read from the inside out
  int *(&array)[10]{ptrs}; // a reference to an array of 10 pointers to int

  return 0;
}

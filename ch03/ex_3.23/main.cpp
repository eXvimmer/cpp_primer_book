
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  // Exercise 3.23: Write a program to create a vector with ten int elements.
  // Using an iterator, assign each element a value that is twice its current
  // value. Test your program by printing the vector.
  vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "[ ";
  for (const int i : vi) {
    cout << i << ' ';
  }
  cout << "]\n";

  for (auto i{vi.begin()}; i != vi.end(); ++i) {
    *i *= 2;
  }

  // NOTE: type of i is vector<int>::iterator

  cout << "[ ";
  for (const int i : vi) {
    cout << i << ' ';
  }
  cout << "]\n";
}

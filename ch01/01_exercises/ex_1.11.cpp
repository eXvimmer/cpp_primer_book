#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int v1{0}, v2{0};
  cout << "Enter 2 numbers: ";
  cin >> v1 >> v2;

  if (v1 > v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
  }

  while (v1 <= v2) {
    cout << v1 << " ";
    v1++;
  }
  cout << endl;
}

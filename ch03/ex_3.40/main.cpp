#include <cstring>
#include <iostream>

using std::cout;

int main() {
  char arr1[]{"Mustafa"};
  char arr2[]{"Hayati"};
  char arr3[sizeof(arr1) + sizeof(arr2)];

  strcpy(arr3, arr1);
  strcat(arr3, " ");
  strcat(arr3, arr2);

  for (char i : arr3) {
    cout << i;
  }
  cout << '\n';

  return 0;
}

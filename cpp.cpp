#include <iostream>

int mayer(int* a) {
  return a[0];
}

int main(void) {
  int arr[] = {30, 230, 3};
  std::cout << mayer(arr) << std::endl;
}
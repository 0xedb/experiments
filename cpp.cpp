#include <iostream>

int mayer(int *a)
{
  return a[0];
}

class Node
{
public:
  int val = 333;
  Node* next;
  // Node(int val) {
  //   val = val;
  // }
  int str(void);
}; 


int Node::str(void) {
  std::cout << "--------->";
  return val;
}

int main(void)
{
  int arr[] = {30, 230, 3};
  Node aa{};
  aa.val = 9;
  std::cout << mayer(arr) << std::endl;
  std::cout << aa.str() << std::endl;
}
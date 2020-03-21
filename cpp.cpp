#include <iostream>

int mayer(int *a)
{
  return a[0];
}

class Node
{
public:
  int val;
  Node* next;
  // Node(int val) {
  //   val = val;
  // }
  std::string str(void);
};

std::string Node::str(void) {
  return "---> " + val;
}

int main(void)
{
  int arr[] = {30, 230, 3};
  Node aa{};
  aa.val = 4300;
  std::cout << mayer(arr) << std::endl;
  std::cout << aa.str() << std::endl;
}
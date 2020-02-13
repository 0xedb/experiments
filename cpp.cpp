#include <iostream>

int main(void)
{
  // lambda function
  []() {
    std::cout << "Hello world" << std::endl;
  }();
}
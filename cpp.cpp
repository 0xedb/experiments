 #include <iostream>

void nuller(std::nullptr_t n) {
  std::cout << "This is null" << std::endl;
}

 int main(void) {
   void* ptr = nullptr;
   nuller(nullptr);
 }
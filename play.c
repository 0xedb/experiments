#include <stdio.h>
#include <stdlib.h>

int double_it(int*);
int const_next(const int*);

int main(void)
{  
  int n = 10;
  double_it(&n); 
  int v = const_next(&n);

  printf("%d", n);
  printf("\n%d\n", v);

  char* str = "Bruno";
  printf("%s", str);

  return 0;
}


int double_it(int* num) {
  return *num *= 2;
}

int const_next(const int* num) {
  return *num + 1;
}



  







  
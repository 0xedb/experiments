#include <stdio.h>
#include <stdlib.h>

int double_it(int*);

int main(void)
{  
  int n = 10;
  double_it(&n); 

  printf("%d", n);

  return 0;
}


int double_it(int* num) {
  return *num *= 2;
}

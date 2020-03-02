#include <stdio.h>

int main(void)
{
  int age;
  printf("Hello, what's your age? ");
  scanf("%d", &age);
  printf("You claim you're %d year(s) old", age);
  return 0;
}
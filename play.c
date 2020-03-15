#include <stdio.h>
#include <pthread.h>

void *say_14();
int *more(int *);

int main(void)
{
  int n = 10;
  pthread_t thread, thread1;
  pthread_create(&thread, NULL, say_14, NULL);
  pthread_create(&thread1, NULL, (void *)more, &n);
  printf("wow\n");
  pthread_join(thread, NULL);
  pthread_join(thread1, NULL);
  printf("Oh, no...\n");
  printf("%d\n", n);

  return 0;
}

void *say_14()
{
  printf("saying... \n");
  return (void *)NULL;
}

int *more(int *n)
{
  printf("the multiplier\n");
  *n *= *n;
  return n;
}
   

   
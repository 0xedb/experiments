#include <stdio.h>
#include <pthread.h>

void* first() {
  int i = 0;
  while(i++ < 10) {
    printf("%d\n", i);
  }

  return (void*) NULL;
}

void* second() {
  int i = 0;
  while(i++ < 20) {
    printf("hello\t %d\n", i);
    return (void*) NULL;
  }
}

int main(void) {
  pthread_t thread, thread1;
  pthread_create(&thread, NULL, first, NULL);
  pthread_create(&thread1, NULL, second, NULL);
  pthread_join(thread1, NULL);
  pthread_join(thread, NULL);
  return 0;
}
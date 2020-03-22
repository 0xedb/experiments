#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <signal.h>

#define ONEGIG (1 << 30)

void kill_handler(int sig)
{
  printf("noooo");
  write(STDOUT_FILENO, "ohhhhhh", 7);
}

int main(void)
{
  // signal(SIGINT, kill_handler);
  // while (true)
  //   printf("ID--------->%d\n", getpid());

  int count = 0;
  while (true)
  {
    if (malloc(ONEGIG) == NULL)
    {
      printf("Got----> %d\n", count);
      return;
    }
    printf("....%d\n", ++count);
  }
}
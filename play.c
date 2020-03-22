#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <signal.h>

void kill_handler(int sig)
{
  printf("noooo");
  write(STDOUT_FILENO, "ohhhhhh", 7);
}

int main(void)
{
  // signal(SIGINT, kill_handler);
  while (true)
    printf("ID--------->%d\n", getpid());
}
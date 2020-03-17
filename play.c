#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <threads.h>

struct Node
{
  int *data;
  struct Node *next;
} * head;

void insert(struct Node *, int *);
void traverse(struct Node *);

void writ()
{
  int i = 1;
  while (i <= 10)
    printf("thrd:\t%d\n", i++);
}

int main(void)
{
  // thrd_t thread;
  // thrd_create(&thread, (thrd_start_t)writ, NULL);
  // thrd_join(thread, NULL);

  int a = 10;
  int b = 30;
  int c = 44;
  int d = -70;  
  insert(head, &a);
  insert(head, &b);
  insert(head, &c);
  insert(head, &d);
  traverse(head); 
  return 0;
}

void insert(struct Node *head, int *val)
{ 
  struct Node latest = {val, head}; 
  *head = latest;
}

void traverse(struct Node *head)
{
   
}

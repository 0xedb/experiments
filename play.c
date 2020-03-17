#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <threads.h>

struct Node
{
  int *data;
  struct Node *next;
};

struct SinglyLinkedList
{
  struct Node *head;
};

void insert(struct SinglyLinkedList *, int *);
void traverse(struct SinglyLinkedList *);

void writ() {
  int i = 0;
  while(i < 10) printf("%d\n", i++);
}

int main(void)
{ 
  thrd_t thread;
  thrd_create(&thread, writ, NULL);
  thrd_join(thread, NULL);

  int a = 10;
  int b = 30;
  int c = 44;
  int d = -70;
  struct SinglyLinkedList *sll = malloc(sizeof(struct SinglyLinkedList));
  insert(sll, &a);
  insert(sll, &b);
  insert(sll, &c);
  insert(sll, &d);
  traverse(sll);
  free(sll); 
  return 0;
}

void insert(struct SinglyLinkedList *ll, int *val)
{
  struct Node *latest = (struct Node *)malloc(sizeof(struct Node));
  latest->data = val;
  latest->next = ll->head;
  ll->head = latest;
}

void traverse(struct SinglyLinkedList *ll)
{
  struct Node *nav = ll->head;
  while (nav)
  {
    printf("%d\n", *nav->data);
    nav = nav -> next;
  }

  free(nav);
  return;
}
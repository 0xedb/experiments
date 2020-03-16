#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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

int main(void)
{ 
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

  printf("%d", UINT16_MAX);
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
    nav = nav->next;
  }
}
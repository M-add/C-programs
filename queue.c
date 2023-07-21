#include <stdio.h>
#define SIZE 5
void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {

  deQueue();

  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  enQueue(6);

  display();

  deQueue();

  display();

 enQueue(1);

 deQueue();

 enQueue(1);

 display();

  return 0;
}

void enQueue(int value) {
  if ((rear+1)% SIZE ==front)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
        {
          front = 0;
         }
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
    {
       front = rear = -1;
    }
  }
}

void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}

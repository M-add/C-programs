#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void push();
int pop();
int peek();
bool isEmpty();

struct node
{
    int val;
    struct node *next;
};

struct node *head;

int main (){
    int choice=0;
    printf("DYNAMIC STACK");
    printf("\n\nChose any of the following options:\n");
    printf("\n 0: Exit 1: Push 2: Pop 3: Peek\n 4: Check if stack is empty  5:Display\n");
    while(1)
    {
        scanf("%d",&choice);
        switch(choice){
            case 0: exit(0);
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: isEmpty(); break;
            case 5: display(); break;
            default: printf("Please choose a correct option!");
        }
    }
}

void push (){
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be pushed: ");
    scanf("%d", &val);
    if(head == NULL){
        ptr->val = val;
        ptr->next = NULL;
        head = ptr;
    }
    else{
        ptr->val = val;
        ptr->next = head;
        head=ptr;
    }
}

int pop(){
    int item;
    struct node *ptr;
    if (head == NULL)
        printf("Underflow State: can't remove any item");
    else{
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("%d is popped out of the stack", item);
        return item;
    }
    return -1;
}

int peek(){
    int x = head->val;
    printf("%d is the top most element of the stack\n", x);
    return x;
}

bool isEmpty(){
    if(head == NULL){
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
    return false;
}
void display()
{
    struct node *temp = head;

    if ((head == NULL))
    {
        printf("stack is Empty\n");
        return 0;
    }
    while(temp != NULL)
    {
        printf("%d", temp->val);
        temp = temp->next;
        if(temp != NULL)
            printf("\n");
    }
}

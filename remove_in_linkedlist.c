#include <stdio.h>
#include <stdlib.h>
int size, i;
struct node
{
    int data;
    struct node *next, *prev;
} *head, *newnode, *temp, *tail, *node, *temp1,*temp2;

void create()
{
    printf("Enter Size: ");
    scanf("%d", &size);
    for (i = 1; i <= size; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
}
void display()
{
    printf("Linked list vales are:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next;
    }
}
void remove_even()
{
    int c=0;
    while((head->data)%2==0)
    {
        head=head->next;
        head->prev=NULL;
        c++;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        if((temp->data)%2==0)
        {
            temp->prev->next=temp->next;
            temp->next->prev= temp->prev;
            c++;
        }
        temp=temp->next;
    }
    if((temp->data)%2==0)
    {
        temp->prev->next=temp->next;
        c++;
    }
    printf("The number of even numbers are: %d\n", c);
    display();
}
void shift()
{
    int k;
    printf("Enter value of k:");
    scanf("%d",&k);
    temp=temp1=temp2=head;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    for(int i=1;i<k;i++)
    {
        temp=temp->next;
    }
    head=temp->next;
    head->prev=NULL;
    temp1->prev=temp2;
    temp2->next=temp1;
    temp->next=NULL;
    display();
}
int main()
{
    int n, b;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        create();
        b = 1;
        break;
    case 2:
        if (b != 1)
        {
            create();
        }
        display();
        break;
    case 3:
        if (b != 1)
        {
            create();
        }
        remove_even();
        break;
    case 4:
        if (b != 1)
        {
            create();
        }
        shift();
        break;
    }
}

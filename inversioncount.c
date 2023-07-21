#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head, *newnode, *temp,*temp1, *tail;
void create(int size)
{
    int i;
    for (i = 1; i <= size; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}
void inverse(int n)
{
    int i,j,count=0,a,b;
    temp=head;
    temp1=temp->next;
    for(i=0;i<n;i++)
    {
      a=temp->data;
      temp1=temp->next;
      for(j=i;j<n;j++)
        {
          b=temp1->data;
           if(a>b)
           {
               count++;
           }
           if(temp1->next!=NULL)
           {
             temp1=temp1->next;
           }
         }
          temp=temp->next;
    }
    printf("%d",count);
}
int main()
{

   int n, b=0,size;
    printf("Enter the size\n");
    scanf("%d", &size);
     scanf("%d", &n);
    switch (n)
    {
    case 1:
        create(size);
        b = 1;
        break;
    case 2:
        if (b != 1)
        {
          create(size);
        }
        inverse(size);
        break;
    }
}

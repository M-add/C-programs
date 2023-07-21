#include <stdio.h>
#include <stdlib.h>
int size, i;
struct node
{
    int data;
    struct node *next, *prev;
} *head, *newnode, *temp, *tail, *node, *temp1;

void create()
{
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
    printf("Structure vales\n");
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
void insertatfront()
{
    printf("\ninsert at front\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    temp = head;
    newnode->next = temp;
    head->prev = newnode;
    head = newnode;
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
void insertatend()
{
    printf("\ninsert at end\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    temp->next = newnode;
    newnode->prev = temp;
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
void insertatmid()
{
    printf("\ninsert at middle\n");
    int p;
    scanf("%d", &p);
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    temp = head;
    for (i = 1; i < p - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void delfront()
{
    printf("delete at front\n");
    temp = head;
    head = temp->next;
    temp->next = NULL;
    head->prev = NULL;
    free(temp);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void delend()
{
    printf("\ndelete at end\n");
    temp = head;
    while (temp->next->next != NULL)
    {

        temp = temp->next;
    }
    node = temp->next;
    temp->next->prev = NULL;
    temp->next = NULL;
    free(node);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void delmid()
{
    printf("\ndeletet at middle\n");
    int p1;
    scanf("%d", &p1);
    temp = head;
    for (i = 1; i < p1 - 1; i++)
    {
        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next;
    }
    node = temp->next;
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
    free(node);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void rev()
{
    printf("\reverse of list\n");
    temp1 = NULL;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        if (temp->prev == NULL)
        {
            break;
        }
        temp = temp->prev;
    }
}
void check()
{
    printf("\ncheck function\n");
    temp = head;
    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            temp = temp->next;
        }
        else
        {
            if (temp->prev == NULL)
            {
                temp1 = temp;
                temp->next = temp;
                temp->prev = NULL;
                free(temp1);
            }
            else
            {
                printf("\ncheck function\n");
                temp1 = temp;
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp = temp->next;
                free(temp1);
            }
        }
    }
    printf("\ncheck function\n");
    head = temp;
    while (head != NULL)
    {
        if (head->prev == NULL)
        {
            break;
        }
        head = head->prev;
    }
    printf("\ncheck function\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
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
        insertatfront();
        break;
    case 4:
        if (b != 1)
        {
            create();
        }
        insertatend();
        break;

    case 5:
        if (b != 1)
        {
            create();
        }
        insertatmid();
        break;

    case 6:
        if (b != 1)
        {
            create();
        }
        delfront();
        break;

    case 7:
        if (b != 1)
        {
            create();
        }
        delend();
        break;
    case 8:
        if (b != 1)
        {
            create();
        }
        delmid();
        break;

    case 10:
        if (b != 1)
        {
            create();
            check();
        }
        break;
    }
}

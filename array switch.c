#include<stdio.h>
#define m 5
int a[m];
void create()
{
  int i;
  printf("Enter the elements:");
  for(i=0;i<m;i++)
  {
      scanf("%d",&a[i]);
  }
}
int display()
{
    create();
    int i;
    printf("The elements are:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
}
int insert()
{
    create();
    int i,p,value;
    printf("enter position and value:");
    scanf("%d %d",&p,&value);
    for(i=m;i>=p;i--)
    {
        a[i]=a[i-1];
        if(i==p)
        {
            a[i]=value;
        }
    }
    for(int i=0;i<m+1;i++)
    {
        printf("%d ",a[i]);
    }
}
int del()
{
    create();
    int i,pos,var;
    printf("Enter the element to be deleted:");
    scanf("%d",&var);
    for(i=0;i<m;i++)
    {
        if(a[i]==var)
        {
            pos=i;
        }
    }
    for(i=pos;i<m;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<m-1;i++)
    {
        printf("%d ",a[i]);
    }
}
int search()
{
    create();
    int s,i,count=0;
    printf("Enter the element to search:");
    scanf("%d",&s);
    for(i=0;i<m;i++)
    {
        if(a[i]==s)
        {
            count=1;
        }
    }
        if(count==1)
        {
            printf("Element is present");
        }
        else
        {
            printf("Element is not present");
        }
}
int main()
{
  int n;
  printf("Enter 1 for create\n");
  printf("Enter 2 for display\n");
  printf("Enter 3 for insert\n");
  printf("Enter 4 for delete\n");
  printf("Enter 5 for searching\n");
  while(1!=0)
{
  printf("\nEnter the choice:");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
       create();
       break;
   case 2:
    display();
    break;
     case 3:
        insert();
        break;
           case 4:
        del();
        break;
    case 5:
        search();
        break;
    default:
     printf("Exit");
        break;
  }
}
}

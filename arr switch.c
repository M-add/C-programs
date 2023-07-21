#include<stdio.h>
#define m 5
int *create(int a[])
{
  int i;
  printf("Enter the elements:");
  for(i=0;i<m;i++)
  {
      scanf("%d",&a[i]);
  }
  return a;
}
int display(int a[])
{
    int i;
    printf("The elements are:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
}
int insert(int a[])
{
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

int main()
{
  int n,a[m];
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
       create(a);
       break;
   case 2:
    display(a);
    break;
    case 3:
        insert(a);
        break;
    default:
     printf("Exit");
        break;
  }
}
return 0;
}

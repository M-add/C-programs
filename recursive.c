#include<stdio.h>
void call(int n,int m)
{
    printf("%d ",n);
    if(n!=m)
    {
        n++;
        call(n,m);
    }
}
int main()
{
  int n,m;
  printf("Enter starting value:");
  scanf("%d",&n);
  printf("\nEnter Ending value:");
  scanf("%d",&m);
  call(n,m);
}

#include<stdio.h>
int sum(int *x,int *y)
{
  *x *=2;
  *y *=2;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    sum(p1,p2);
    printf("%d %d",a,b);
}

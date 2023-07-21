#include<stdio.h>
int main()
{
  int a=10;
  int *p,*q;
  p=&a;
  q=p;
  printf("%d %d\n",*p,*q);
  *q=5;
  printf("%d\n",*q);
  return 0;
}

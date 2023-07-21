#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  int temp=num;
  while(temp>0)
  {
      num++;
      temp--;
  }
  printf("\nThe double of the given number is:%d\n",num);
}

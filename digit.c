#include<stdio.h>
int main()
{
  long int num;
  scanf("%ld",&num);
  //printf("%d",num%1000);
  int n,max=0;
  while(num>0)
  {
   n=num%1000;
   if(n>max && (n%2)!=0)
   {
       max=n;
   }
   if(max==num)
   {
       break;
   }
   num=num/10;
  }
  printf("%d",max);
}

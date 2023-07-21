#include<stdio.h>
void armstrong(int n)
{
    int sum=0,x,count=0,b,i,m;
    x=n;
    while(n>0)
    {
       n=n/10;
       count++;
    }
    n=x;
    while(x>0)
    {
        m=1;
        b=x%10;
        for(i=0;i<count;i++)
        {
            m=m*b;
        }
        sum=sum+m;
        x=x/10;
    }
     if(n==sum)
   {
       printf("\nArmstrong");
   }
   else
   {
       printf("\nNot armstrong");
   }
}
void pal(int n)
{
   int sum=0,b=n;
   while(n>0)
   {
       sum*=10;
       sum+=n%10;
       n=n/10;
   }
   if(b==sum)
   {
       printf("\nPalindrome");
   }
   else
   {
       printf("\n Not palindrome");
   }
}
int main()
{
    int a;
    scanf("%d",&a);
    armstrong(a);
    pal(a);
}

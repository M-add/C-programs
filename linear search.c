#include<stdio.h>
int main()
{
    int i,n,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         if(k==a[i])
         {
             count++;
         }
     }
     if(count>0)
     {
         printf("Element is present");
     }
     else
     {
         printf("Element is not present");
     }

}

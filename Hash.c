#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 int n1=0,n2=1,n3=0;
 for(i=0;i<n;i++)
 {
     n3=n1+n2;
     n1=n2;
     n2=n3;
     for(j=0;j<n3;j++)
     {
         printf("%d",n3);
     }
     printf("\n");
 }
 return 0;
}


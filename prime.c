#include<stdio.h>
int main()
{
  int i,n,j,k=0,count,flag=0,sum=0;
  scanf("%d",&n);
  int a[n];
  for(i=2;i<=n;i++)
  {
     count=0;
     for(j=2;j<=n/2;j++)
     {
         if(i%j==0)
         {
             count++;
         }
     }
     if(count==1)
        {
         a[k]=i;
         k++;
        }
  }
  for(i=0;i<k;i++)
  {
     sum=sum+a[i];
     flag++;
     if(sum==n)
     {
         break;
     }
  }
  printf("%d",flag);
}



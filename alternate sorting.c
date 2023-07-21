#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n,t,j;
 scanf("%d",&n);
 int a[n];
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     if(a[i]<a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
   }
  }
  t=n-1;j=0;
  for(i=0;i<n;i++)
  {
   if(i%2==0)
    {
    printf("%d ",a[t] );
    --t;
    }
    else
    {
    printf("%d ",a[j] );
     ++j;
   }
  }

 return 0;
}

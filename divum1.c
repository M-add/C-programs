#include<stdio.h>
int main()
{
  int n,i,j,sum1=0,sum2=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
       if(a[i]==a[j])
       {
         a[i]=0;
         a[j]=0;
       }
    }
    if(a[i]>0)
    {
     sum1+=a[i];
    }
    else if(a[i]<0)
    {
      sum2+=a[i];
    }
  }
  printf("%d",sum1-sum2);
}

#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    int low=a[0],high=a[n-1];
    int mid=(low+high)/2;
    while(low<=high)
    {
     if(k<=a[mid])
      {
        high=a[mid-1];
      }
      else if(k==a[mid])
      {
      printf("Element is present at mid");
      }
      else if(k>=a[mid])
      {
        low=a[mid+1];
      }
    }

 return 0;
}

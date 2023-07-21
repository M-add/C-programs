#include<stdio.h>
int main()
{
    int i,n,key;
    scanf("%d",&n);
    scanf("%d",&key);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    int low=a[0],high=a[n-1];
    int mid=(low+high)/2;
   while (low <= high)
   {
    if(a[mid] < key)
    {
      low = mid + 1;
      mid=(low+high)/2;
    }
    else if (a[mid]==key)
    {
     printf("%d found at mid", key);
     break;
    }
    else if(a[mid]>key)
    {
      high = mid - 1;
      mid = (low + high)/2;
    }
   }
   if(low>high)
   {
       printf("Element not found");
   }

}

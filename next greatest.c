#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter array size: ");
  scanf("%d",&n);
  int a[n];
  printf("\nEnter the array elements: ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i==n-1)
    {
       printf("%d ==>-1\n",a[i]);
    }
    else
    {
      for(j=i+1;j<n;j++)
      {
        if(a[j]>a[i])
        {
            printf("%d ==> %d\n",a[i],a[j]);
            break;
        }
        if(j==n-1)
        {
          printf("%d ==>-1\n",a[i]);
        }
      }
    }
  }
}

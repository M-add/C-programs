#include<stdio.h>
#include <math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
       printf("%d",&a[i]);
    }
    return 0;
}


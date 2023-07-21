#include<stdio.h>
int main()
{
    int i,n,b=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
         b=b+a[i];
    }
    int c=n*(n+1)/2;
    printf("\n%d",c-b);
}

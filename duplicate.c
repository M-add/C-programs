#include<stdio.h>
int main()
{
    int a[]={1,2,3,6,3,6,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        a[a[i]%n]=a[a[i]%n]+n;
    }
    printf("the repeating elements are:\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]>=n*2)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}

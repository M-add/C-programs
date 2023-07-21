#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mid=n/2,a[n],i,j,count;
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=0;
            }
        }
            if(count>mid)
            {
                printf("%d",a[i]);
            }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    int n1;
    scanf("%d",&n1);
    printf("\n");
    while(n1>0)
    {
       int e,f,count=0;
       scanf("%d %d",&e,&f);
       for(i=0;i<n;i++)
       {
        if((a[i]>=e)&&(a[i]<=f))
        {
            count++;
        }

       }
       printf("%d ",count);
       n--;

    }
    return 0;
}

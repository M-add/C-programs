#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int count;
    printf("1 ");
    for(i=1;i<n;i++)
    {
        count=0;
        for(j=i-1;j>=0;j--)
        {
            if(s[j]>=s[i])
            {
                count++;
                break;
            }
            else
            {
                count++;
            }
        }
        printf("%d ",count);
    }
}

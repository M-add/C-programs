#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],i,j,count;
    int b[n];
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
         if(a[i][j]==1)
         {
            count++;
         }
         b[i]=count;
        }
    }
    int index=0,max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            index=i;
        }
    }
     printf("%d",index);
return 0;

}

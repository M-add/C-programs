#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    scanf("%d %d",&n1,&n2);
    int a[n1][n1],b[n2][n2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nResult matrix\n");
    int c[n1][n1];
    for(i=0;i<n2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

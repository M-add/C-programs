#include<stdio.h>
int main()
{
    int i,j,n1,n2,temp;
    scanf("%d %d",&n1,&n2);
    int a[n1][n1],b[n2][n2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Anti clockwise rotation\n");
     for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    printf("Anti clock rotation\n");
   for(i=n1-1;i>=0;i--)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}

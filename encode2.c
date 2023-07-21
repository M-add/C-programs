#include<stdio.h>
int main()
{
    int n,m,flag,i,j,k;
    scanf("%d %d",&n,&m);
    scanf("%d",&flag);
    int mat[n][n];
    k=m-1;
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
          scanf("%d",&mat[i][j]);
      }
    }
    if(flag==1)
    {
     for(i=n-1;i>=0;i--)
      {
       for(j=0;j<m;j++)
        {
          printf("%d ",mat[i][j]);
        }
        printf("\n");
      }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d ",mat[j][k]);
            }
            k--;
            printf("\n");
        }
    }
}

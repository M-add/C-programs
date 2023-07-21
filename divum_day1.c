#include<stdio.h>
int main()
{
  int x,n,m,i,j,k;
  scanf("%d %d %d",&x,&n,&m);
  int a[n][m],b[n][m];
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          a[i][j]=x;
          x++;
      }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      b[i][j]=a[j][i];
    }
  }
  int c[n][n],sum=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
       sum=0;
      for(k=0;k<m;k++)
      {
        sum+=a[i][k]*b[k][j];
      }
      c[i][j]=sum;
    }
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}

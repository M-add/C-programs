#include<stdio.h>
int main()
{
  int n,i,j,rmin,rmax,cmin,cmax;
  scanf("%d",&n);
  int a[n][n],count=1;
  rmin=1;
  rmax=n;
  cmin=1;
  cmax=n;
  while(rmin<=rmax)
  {
      for(i=cmin;i<=cmax;i++)
      {
          a[rmin][i]=count++;
      }
      for(i=rmin+1;i<=rmax;i++)
      {
          a[i][cmax]=count++;
      }
      for(i=cmax-1;i>=cmin;i--)
      {
          a[rmax][i]=count++;
      }
      for(i=rmax-1;i>=rmin+1;i--)
      {
          a[i][cmin]=count++;
      }
      rmin++,rmax--,cmin++,cmax--;
  }
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
         printf("%d ",a[i][j]);
      }
      printf("\n");

  }
  return 0;
}

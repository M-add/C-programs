#include <stdio.h>
int main()
{
  int i,j,n;
  scanf("%d",&n);
  int a[n][n];
   for(i=0;i<n;i++)
  {
      for(j=0;j<=i;j++)
      {
          scanf("%d",a[i][j]);
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<=i;j++)
      {
          printf(" ");
      }
      for(j=i;j<n;j++)
      {
          printf("*");
      }
      printf("\n");
  }
}

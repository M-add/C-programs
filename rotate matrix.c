#include<stdio.h>
int main()
{
   int i,n1,n2,j,k;
  scanf("%d %d",&n1,&n2);
  int a[n1][n2];
  int b[n1][n2];
  for(i=0;i<n1;i++)
  {
     for(j=0;j<n2;j++)
     {
         scanf("%d",&a[i][j]);
     }
  }
  for(i=0;i<n1;i++)
  {
      j=0;
      for(k=n1-1;k>=0;k--)
      {
          b[i][j]=a[k][i];
          j++;
      }
  }
   for(i=0;i<n1;i++)
  {
     for(k=0;k<n2;k++)
     {
         printf("%d ",b[i][k]);
     }
     printf("\n");
  }
}



#include<stdio.h>
int main()
{
  int n,i,j,k=1;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
        printf(" ");
    }
    for(j=0;j<k;j++)
    {
        printf("*");
    }
    printf("\n");
    k++;
  }
}

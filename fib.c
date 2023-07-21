#include <stdio.h>
int main()
{
  int i,j,n;
  scanf("%d",&n);
  int n1=1,n2=1,n3=0;
  for(i=2;i<n;i++)
  {
      n3=n1+n2;
      n1=n2;
      n2=n3;
  }
  printf("%d",n3);
}


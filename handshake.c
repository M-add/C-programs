#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=n-1-i;
  }
  printf("\nNumber of handshakes possible between %d people are:%d\n",n,sum);
}

#include<stdio.h>
gcd(i,j)
{
  if(j==0)
  {
      return i;
  }
  else
  {
      gcd(i,j%i);
  }
}
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  printf("GCD of the given numbers is:%d",gcd(n,m));
  return 0;
}

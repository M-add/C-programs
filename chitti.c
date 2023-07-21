#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t>0)
  {
      int n,k;
      scanf("%d %d",&n,&k);
      if(k==0)
      {
          printf("NO");
      }
      else if(n==k)
      {
          printf("Yes");
      }
      else if(k%2!=0&&n%2==0)
      {
        printf("YES");
      }
      else if(n%2!=0&&k%2!=0)
      {
          printf("NO");
      }
      else if(n%2!=0&&k%2==0)
      {
          printf("NO");
      }

      t--;
  }
  return 0;
}

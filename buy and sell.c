#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int p[n];
  int i,j,k;
  for(i=0;i<n;i++)
  {
      scanf("%d",&p[i]);
  }
  scanf("%d",&k);
  int count=0,res=0,temp=p[1],temp1;
  for(i=1;i<n;i++)
  {
     if(p[i]>temp)
     {
         temp1=p[i]-temp;
         res+=temp1;
         temp1=0;
         temp=0;
     }
       temp=p[i];
  }
  printf("%d",res);
}

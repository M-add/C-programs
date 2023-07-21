#include<stdio.h>
int main()
{
  int i,j,n,m,temp;
  scanf("%d %d",&n,&m);
  int a[n+m],b[m];
  printf("\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("\n");
  for(i=0;i<m;i++)
  {
      scanf("%d",&b[i]);
  }
  printf("\n");
  int t=n;
  for(i=0;i<n+m;i++)
  {
      a[t]=b[i];
      t++;
  }
  for(i=0;i<n+m;i++)
  {
      for(j=i+1;j<n+m;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }

  }
  for(i=0;i<n+m;i++)
  {
      for(j=i+1;j<n+m;j++)
      {
          if(a[i]==a[j])
          {
              a[j]=0;
          }

      }
  }
  for(i=0;i<n+m;i++)
  {
      if(a[i]!=0)
      {
         printf("%d ",a[i]);
      }
  }
  return 0;
}

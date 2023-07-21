#include<stdio.h>
int main()
{
  int i,j,n,m,temp,temp1;
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
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }

  }
  for(i=0;i<m;i++)
  {
      for(j=i+1;j<m;j++)
      {
          if(b[i]>b[j])
          {
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
          }
      }

  }
  int count=0;
  for(i=0;i<n;i++)
  {
      if (a[i]!=b[i])
      {
          count++;
      }

  }
  if(count>0)
  {
      printf("not equal");

  }
  else
  {
      printf("equal");
  }
  return 0;
}

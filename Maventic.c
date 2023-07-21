#include<stdio.h>
int one(int a[],int n)
{
    int i,j,k;
    for(i=1;i<n-1;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<a[j])
            {
                break;
            }
            else if(j==0)
            {
                for(k=i+1;k<n;k++)
                {
                    if(a[i]>a[k])
                    {
                        break;
                    }
                    else if(k==(n-1))
                    {
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
void two(int a[],int n,int x)
{
    int i,j,diff=x-a[1],p1=0,p2=0,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          temp=x-(a[i]+a[j]);
         if(temp<diff && (a[i]+a[j])<=x)
         {
             diff=temp;
             p1=a[i];
             p2=a[j];
         }
        }
    }
   printf("%d %d",p1,p2);
}
void third()
{
    int n,m,i,j;
    printf("Enter the size of 2 arrays:");
    scanf("%d %d",&n,&m);
    int a[n],b[n],k=0;
    for (i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for (i=0;i<m;i++)
    {
       scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         if(a[i]==b[j])
         {
             k++;
         }
        }
    }
    printf("%d",(n+m)-k);
}
int main()
{
  int n,i,c,x;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  scanf("%d",&c);
  switch(c)
  {
  case 1:
    printf("%d",one(a,n));
    break;
  case 2:
    printf("X value:");
    scanf("%d",&x);
    two(a,n,x);
    break;
  case 3:
    third();
    break;
  }

}

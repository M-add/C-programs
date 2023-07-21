#include<stdio.h>
int main()
{
   int n,m,count=0;
   scanf("%d %d",&n,&m);
   int a[n],b[m],i,j,k=0;
   int c[n+m];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
        if(a[i]==b[j])
        {
         count++;
         break;
        }
       }
   }
   printf("%d",(n-count)+(m-count));
}

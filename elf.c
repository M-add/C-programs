#include<stdio.h>
int sum(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int elf(int n)
{
   int a[n],i,n1=n;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int x=sum(a,n1);
   return x;
}
int main()
{
  int t,i,k=0;
  int sum[k];
  scanf("%d",&t);
 while(t!=0)
 {
     int n;
     scanf("%d",&n);
     sum[k]=elf(n);
     k++;
     t--;
 }
 for(i=0;i<k;i++)
 {
     printf("%d ",sum[i]);
 }
}

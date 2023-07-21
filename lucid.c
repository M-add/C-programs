#include<stdio.h>
int power(int a)
{
    int res=1;
    for(int i=1;i<=a;i++)
    {
       res=res*a;
    }
    return res;
}
int calculate(int n)
{
    int k,i,j;
    int temp;
    for(i=1;i<n/2;i++)
    {
       k=power(i);
       for(j=1;j<n/2;j++)
       {
          temp=n-(j*j);
         // printf("%d ",temp);
          if(temp==k)
          {
              printf("\nThe value of k is:%d",i);
              printf("\nThe value of d is:%d",j);
              printf("\nYES");
              return 1;
          }
       }
    }
    printf("NO");
    return 1;
}
int main()
{
    int n,t;
    char yn;
    scanf("%d",&n);
    calculate(n);
    return 0;
}

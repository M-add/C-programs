#include<stdio.h>
int main()
{
    int n1,n2,i,temp,res=0;
    scanf("%d %d",&n1,&n2);
    temp=n1;
    for(i=1;i<n2;i++)
    {
        temp=temp*n1;
    }
    int k,j=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        j=j*10+temp%10;
        temp=temp/10;
    }
    for(i=0;i<k;i++)
    {
        res=res*10+j%10;
        j=j/10;
    }
    printf("%d",res);
}

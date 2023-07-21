#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n/2;
    if(n%2==0)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("%d",x);
    }
    return 0;
}

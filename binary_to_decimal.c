#include<stdio.h>
int main()
{
    long int bi;
    scanf("%ld",&bi);
    int temp,dec=0,base=1;
    while(bi>0)
    {
        temp=bi%10;
        dec=dec+temp*base;
        bi=bi/10;
        base=base*2;
    }
    printf("%d",dec);
}


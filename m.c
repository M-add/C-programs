#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    if(j==0 ||j==(n-1)||i+j==n-1 &&i<n/2||i==j&&i<=(n-1)/2)
    {
            printf("* ");
    }
    else
    {
        printf("  ");
    }
 }
    printf("\n");
}

}

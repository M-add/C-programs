#include <stdio.h>
//call by value
void function(int x,int y)
{
  printf("%d %d\n",y,x);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    function(a,b);
    printf("%d %d",a,b);
}

#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e')
        {
            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);
}

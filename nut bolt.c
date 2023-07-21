#include<stdio.h>
int main()
{
    char order[8]={'!','#','$','%','&','*','@','^','~'};
    char nut[100];
    char bolt[100];
    scanf("%s",&nut);
    scanf("%s",&bolt);
    for(int i=0;order[i]!='\0';i++)
    {
        for(int j=0;nut[j]!='\0';j++)
        {
            if(order[i]==nut[j])
            {
                printf("%c",nut[j]);
                break;
            }
        }
    }
    printf("\n");
    for(int i=0;order[i]!='\0';i++)
    {
        for(int j=0;bolt[j]!='\0';j++)
        {
            if(order[i]==bolt[j])
            {
                printf("%c",bolt[j]);
                break;
            }
        }
    }
}

#include<stdio.h>
int main()
{
  char str[100];
  scanf("%s",&str);
  int n=strlen(str);
  int count=0,i,j;
  for(i=0;str[i]!='\0';i++)
  {
    count=0;
    for(j=i;str[j]!='\0';j++)
    {
        if(str[i]==str[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }
     printf("%c%d",str[i],count);
     i=i+count-1;

    }
  }


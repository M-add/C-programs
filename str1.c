#include <stdio.h>
#include<string.h>
int main()
 {
    char str[100],s[100];
      scanf("%[^\n]s",str);
      int i,j,len =strlen(str);
      int length=0,k=0;
      for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
          break;
        }
        else
        {
            for(j=i-;j<i;j++)
            {
              printf("%c",str[j]);
            }
            length++;
        }
    }
    printf("%d",length);

 }

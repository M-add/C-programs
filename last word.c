#include <stdio.h>
#include<string.h>
int main()
 {
      char str[100];
      scanf("%[^\n]s",str);
       char *token=strtok(str,' ');
       while (token != NULL)
      {
        printf("%s", token);
        token = strtok(NULL, " ");
      }

 }

#include<stdio.h>
int main()
{
  char str[100],str1[100];
  scanf("%[^\n]s",str);
  int i,j=0;
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
      {
          str1[j]=str[i];
          j++;
      }
  }
  printf("%s",str1);
}

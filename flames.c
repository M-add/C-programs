#include <stdio.h>
#include<string.h>
int main()
 {
      char str1[10];
      scanf("%s",str1);
      char str2[10];
      scanf("%s",str2);
      int i,j,len1=strlen(str1),len2=strlen(str2);
      int count=0;
       for(i=0;i<=len1-1;i++)
      {
        for(j=0;j<=len2-1;j++)
        {
          if(str1[i]==str2[j])
          {
              str1[i]=0;
            str2[j]=0;
          }
        }
      }
      for(i=0;i<=len1-1;i++)
      {
          if(str1[i]!=0)
          {
              count++;
          }
      }
       for(i=0;i<=len2-1;i++)
      {
          if(str2[i]!=0)
          {
              count++;
          }
      }
      char f[6]="flames";
      printf("%d",count);
      for(i=1;i<=count;i++)
      {
          if(i==count)
          {
            f[count]=0;
            f[i]=f[i+1];
          }
      }
      for(i=1;i<=count;i++)
      {
          if(f[i]!=0);
          {
              printf("%s",f[i]);
          }
      }
 }

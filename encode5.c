int main()
{
  char str[100];
  char c;
  scanf("%s %c",&str,&c);
  int i=0,count=0;
  while(str[i]!='\0')
  {
      if(str[i]==c)
      {
        count++;
      }
      i++;
  }
  printf("%d",count);
}

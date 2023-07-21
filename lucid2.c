#include<stdio.h>
int count=1;
int arr[10];
int x=0;
int print(int ti,int tj,int a[])
{
    //printf("%d ",ti);
    if(a[1]>arr[count-1]&&a[0]==arr[0])
    {
        printf("%d-%d",arr[0],a[1]);
        return 0;
    }
   if(ti!=0)
   {
    for(int i=0;i<ti-1;i=i+2)
     {
        printf("%d-%d ",arr[i],arr[i+1]);
     }
      printf("%d-%d ",arr[ti-1],arr[tj]);
    }
   else
   {
    for(int i=0;i<count;i=i+2)
    {
        printf("%d-%d ",arr[i],arr[i+1]);
    }
   }
   return 0;
}
int check(int count,int s,int e)
{
   int ti=0,tj=0;
   int a[2];
   a[0]=s;
   a[1]=e;
   if(count==1)
   {
    printf("%d-%d",s,e);
    arr[x++]=s;
    arr[x++]=e;
    return 0;
   }
   else
   {
     for(int i=0;i<count;i++)
     {
       if(a[0]<arr[i])
       {
         ti=i-2;
       }
       if(a[1]<arr[i])
       {
         tj=i;
       }
     }
   }
   arr[x++]=s;
   arr[x++]=e;
   print(ti,tj,a);
   return 0;
}
int main()
{
    int s,e;
    char c;
    scanf("%d %d",&s,&e);
    check(count,s,e);
    count=count+2;
    printf("\nDo you want to continue? Y/N\n");
    scanf("%s",&c);
    if(c=='y')
    {
        main();
    }
    else
    {
        return 0;
    }

}

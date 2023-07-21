#include <stdio.h>
int main() {
   int n,count= 1,space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for (i = 0; i<n;i++) {
      for (space = 1; space <=n-i;space++){
        printf("  ");
      }

      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            count = 1;
         else
         {
             count = count * (i - j + 1) / j;
         }

         printf("%4d",count);
      }
      printf("\n");
   }
   return 0;
}

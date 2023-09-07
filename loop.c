#include <stdio.h>

int main() {
   int a;
   printf("enter no ");
   scanf("%d", &a);
   int b=a;
   int sum =0;
   do{
        printf("%d", b);
        sum = sum + b;
        b--;
   }
   while(b>=1);
   printf("\n %d", sum);
   return 0;
}
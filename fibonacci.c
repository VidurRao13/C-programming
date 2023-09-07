#include<stdio.h>
#include<math.h>

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int fib3 = fib1 + fib2;
    return fib3;
}

int main(){
    int n;
    printf("enter no ");
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}
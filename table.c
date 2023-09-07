#include<stdio.h>
#include<math.h>

int fact(int n){
    if(n == 1){
        return 1;
    }
    int fact1 = fact(n-1);
    int fact2 = fact1 * n;
    return fact2;
}

int main(){
    int n;
    printf("enter number");
    scanf("%d", &n);
    printf("factorial is %d", fact(n));
    return 0;
}
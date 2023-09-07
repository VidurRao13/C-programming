#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("enter value");
    scanf("%d", &n);
    for(int a = 1; a <=n; a = a+1){
        sum = sum + a; 
    }
    printf("%d", sum);
    return 0;
}
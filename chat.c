#include <stdio.h>

int sum(int a, int b);
void Table(int x);

int main(){
    int a,b,x;
    printf("enter 1st no ");
    scanf("%d", &a);
    
    printf("enter 2nd no ");
    scanf("%d", &b);
    
    int s = sum(a, b); 
    printf("sum is %d", s);
    return 0;
}

int sum(int a, int b){
    return a+b;
}
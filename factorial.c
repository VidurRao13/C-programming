#include<stdio.h>

int main(){
    int i=0, num, fact=1;
    printf("enter no ");
    scanf("%d", &num);
    for(i=num; i>0; i--){
        fact = fact * i;
    }
    printf("%d", fact);
    }
#include<stdio.h>

int main(){
    int a;
    printf("enter age :");
    scanf("%d", &a);
    
      
    if(a >= 18){
        printf("can watch R rated movies");
    }
    else {
    if(a >= 13){
        printf("can watch PG 13");
    }
    else if(a >= 9 && a < 13){
        printf("can watch PG 9");
    }
    else if(a >= 3 && a < 9){
        printf("can watch PG 3");
    }
    }
    return 0;
    }

    // if u want to write in if, else, else if, then write program given below
    //  a >= 18 ? printf("R rated movie") : a >= 13 ? printf("PG 13") : a >= 8 ? printf("PG 9") : a >= 3 ? printf("PG 3"): printf("cant watch");
    // just write this after scan f. called ternary fuction.
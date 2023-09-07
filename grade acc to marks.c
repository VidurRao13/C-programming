#include <stdio.h>

int main() {
    int marks;
    printf("enter aggregate marks ");
    scanf("%d", &marks);

    if( marks <= 30 && marks >= 0){
        printf("F");
    }
    else if(marks > 30 && marks <=50){
        printf("C");
    }
    else if(marks >50 && marks <= 70){
        printf("B");
    }
    else if(marks > 70 && marks <= 100){
        printf("A");
    } 
    else{
        printf("wrong marks");
    }
    return 0;
}
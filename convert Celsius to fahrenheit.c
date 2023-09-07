#include <stdio.h>
#include <math.h>

float func(float c){
    float func = (c * 9/5);
    float func1 = (func + 32);
    return func1; 
}

int main(){
    float c;
    printf("enter temp in celsius ");
    scanf("%f", &c);
    printf("%f", func(c));
}
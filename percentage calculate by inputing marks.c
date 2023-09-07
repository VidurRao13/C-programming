#include<stdio.h>
#include<math.h>

float perc(float a, float b, float c){
    float total = (a + b + c)/3;
    return total;
}

int main(){
    float a,b,c;
    printf("enter sanskrit marks ");
    scanf("%f", &a);
    printf("enter math marks ");
    scanf("%f", &b);
    printf("enter science marks ");
    scanf("%f", &c);
    printf("percentage is %f", perc(a,b,c));
    return 0;
}
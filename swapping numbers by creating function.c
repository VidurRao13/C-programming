#include<stdio.h>
#include<math.h>

void swap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("swapped values %d %d", a,b);
}
int main(){
    int a,b;
    printf("enter value of a,b ");
    scanf("%d %d", &a, &b);
    swap(a,b);
    return 0;
}
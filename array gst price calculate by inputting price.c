#include<stdio.h>
#include<math.h>

int main(){
    int size;
    float arr[size];
    printf("enter size of array");
    scanf("%d", &size);
    printf("enter elements in array");
    for(int i=0; i<size; i++){
        scanf("%f", &arr[i]);
    }
    for(int i=0; i<size; i++){
        arr[i] = 0.18 * arr[i] + arr[i];
        printf("value is %f \n", arr[i]);
    }
}
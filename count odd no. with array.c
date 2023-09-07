#include<stdio.h>

int odd(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if (arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}
int main(){
    int size;
    int arr[size];
    printf("enter size of array : ");
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        printf("enter value of element %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("count odd numbers in this array are : %d", odd(arr, size));
    return 0;
}
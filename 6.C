#include<stdio.h>

int indexprocessing(int arr[],int size){
    if (size <= 3) return 0;

    int max1= -1000000, max2= -1000000;
    for(int i=0; i<size; i+=2){
        if (arr[i] > max1){
            max2 =max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }

    int min1=1000000, min2=1000000;
    for(int i=1; i<size; i+=2){
        if(arr[i] < min1){
            min2= min1;
            min1=arr[i];
        } else if (arr[i] < min2 && arr[i] != min1){
            min2=arr[i];
        }
    }

    return max2 + min2;
}

int main(){
    int arr[]={9,4,7,1,6,3}, size=6;
    int result = indexprocessing(arr,size);
    printf("Result sum is: %d", result);
    return 0;
}
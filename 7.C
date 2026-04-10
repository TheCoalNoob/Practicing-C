#include<stdio.h>

int smallestpair(int arr[], int size, int limit){
    if (size < 2) return -1;

    //bubble sort
    for(int i=0; i<size-1;i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int firstSmall = arr[0];
    int secondSmall = -1;
    int found=0;

    for(int i=0; i<size; i++){
        if(arr[i] != firstSmall){
            secondSmall = arr[i];
            found=1;
            break;
        }
    }
    if(!found || (firstSmall + secondSmall > limit)){
        return 0;
    }
    return firstSmall * secondSmall;
}

int main(){
    int arr[]={6,1,2,9,4};
    int size=5;
    int limit=8;
    int result = smallestpair(arr,size,limit);
    printf("Smallest pair product: %d", result);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int absolutedifference(int arr[], int size, int k, int t){
    int count=0;
    
    for (int i=0; i<size; i++){
        int distance = abs(arr[i]-k);

        if (distance < t){
            count++;
        }
    }
    return (count==0) ? -1 : count;
}


int main(){
    int arr[]={10,15,20,25,30}, size=5, k=22, t=4;
    int result = absolutedifference(arr,size,k,t);
    printf("Count of elements: %d", result);
    return 0;
}
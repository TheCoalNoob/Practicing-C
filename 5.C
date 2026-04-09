#include<stdio.h>

int divisibilitydifference(int x, int y){
    int sumDivisible=0;
    int sumNotDivisible=0;

    for (int i=1; i<=y; i++){
        if (i%x==0){
            sumDivisible+=i;
        } else {
            sumNotDivisible+=i;
        }
    }
    return sumNotDivisible - sumDivisible;
}

int main(){
    int x=3, y=10;
    int result = divisibilitydifference(x,y);
    printf("Difference is: %d", result);
    return 0;
}
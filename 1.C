#include<stdio.h>

int checkpoint(int p, int cost, int fuel[], int size){
    if (size==0) return -1;

    int totalfuel=p*cost;
    int currentfuel=0;

    for (int i=0; i<size; i++){
        currentfuel += fuel[i];

        if (currentfuel >=totalfuel){
            return i;
        }
    }

    return 0;

}

int main(){
    int p=5, cost=3, fuel[]={4,6,3,5,2},size=5,result;

    result=checkpoint(p,cost,fuel,size);

    printf("Checkpoint needed is %d", result);
}
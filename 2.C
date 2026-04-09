#include<stdio.h>
#include<string.h>

int checkexpression(char* str){
    if (str==NULL || strlen(str)==0) return -1;

    int result = str[0] - '0'; //CONVERT CHAR TO INT

    for (int i=0; str[i] != '\0'; i +=2){
        char op = str[i];
        int nextVal=str[i+1] - '\0';

        if (op=='X'){
            result = result & nextVal;
        } else if (op == 'Y'){
            result = result | nextVal;
        } else if (op == 'Z'){
            result = result ^ nextVal;
        }
    }
    return result;
}

int main(){
    char expression[]="1X0Y1Z1";
    int result = checkexpression(expression);
    printf("Result of %s is: %d", expression, result);
    return 0;
}
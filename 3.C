#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isvalid(char* str){
    int len=strlen(str);
    if(len<5) return 0;
    if(!isalpha(str[0])) return 0;

    int hasUpper=0, hasDigit=0;

    for(int i=0; i<len; i++){
        if(str[i] == ' ' || str[i] == '*') return 0;
        if(isupper(str[i])) hasUpper=1;
        if(isdigit(str[i])) hasDigit=1;
    }
    return (hasUpper&&hasDigit) ? 1 : 0;
}

int main(){
    char pass1[]="Ab3$k";
    char pass2[]="9Abc1";
    char pass3[]="Hello20276";

    printf("'%s' is valid? %d\n", pass1, isvalid(pass1));
    printf("'%s' is valid? %d\n", pass2, isvalid(pass2));
    printf("'%s' is valid? %d\n", pass3, isvalid(pass3));
}
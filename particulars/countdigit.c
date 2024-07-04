#include<stdio.h>

void main(){
    int dig = 6;
    int count=1;

    while(dig/10 != 0){
        dig = dig/10;
        printf("digit is %d\n",dig);
        count=count+1;
    }
    printf("no. of digits = %d",count);
}
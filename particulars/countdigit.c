#include<stdio.h>

void main(){
    int dig = 586809;
    int count=0;

    while(dig != 0){
        dig = dig/10;
        printf("digit is %d\n",dig);
        count=count+1;
    }
    printf("no. of digits = %d",count);
}
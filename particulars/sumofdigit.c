#include<stdio.h>

void main(){
    int num = 586809;
    int sum = 0;
    int r;


    while(num != 0){
        r = num % 10;
        sum = sum + r ;
        printf("reminder is %d\n", r);

        num = num/10;

    }
    printf("sum of digits = %d",sum);
}
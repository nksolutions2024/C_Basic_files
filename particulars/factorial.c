#include<stdio.h>

void main(){
    int a = 5;
    int fact=1;
    for(int i=1; i<=a; i++){
        fact = fact*i;
    }
    printf("factorial is %d",fact);
}
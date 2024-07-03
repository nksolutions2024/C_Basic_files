//tcs assessment 2
#include<stdio.h>

void main(){
    //q4
    int a=5, b=-7, c=0, d;
    d = ++a && ++b || ++c;
    printf("\n %d %d %d %d",a,b,c,d);
    printf("\n %d",++a && ++b);
}

// Operators in C have precedence rules where ++ has higher precedence than &&, ||
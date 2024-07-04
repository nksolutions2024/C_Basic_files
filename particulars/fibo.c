#include<stdio.h>

void main(){
    printf("fibonacci series is 0,1,");
    int a=0, b=1;
    int n=10;

    for(int i=1; i<=10;i++){
        a = a + b;
        printf("%d,",a);
        b = a + b;
        printf("%d,",b);
    }

}
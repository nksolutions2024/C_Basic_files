//reverse the string
#include<stdio.h>
#include<math.h>

void main(){
    int num = 12345;
    
    int r;
    double reverse=0;
    int k=4;

    while(num != 0){
        r = num % 10;
        printf("reminder is %d\n", r);
        reverse = reverse + r * (pow(10,k));
        k--;
        printf("reverse_no. is %f\n", reverse);
        num = num/10;

    }
    printf("reverse of number = %.0f",reverse);
}
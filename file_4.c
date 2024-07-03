#include<stdio.h>

void main(){
    printf("%d",sizeof(int));
    printf("\n%d",sizeof(float));
    printf("\n%d",sizeof(char));

    printf("\n\n%d",sizeof(double));
    printf("\n%d",sizeof(long));
    printf("\n%d",sizeof(long int));
    printf("\n\n%d",sizeof(long long int));
    printf("\n%d",sizeof(long double ));
}
//output
// 4
// 4
// 1

// 8
// 4
// 4

// 8
// 12
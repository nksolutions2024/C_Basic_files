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
    printf("\n%d",sizeof(short int));

    printf("\n\n%d",sizeof(unsigned char));
    printf("\n%d",sizeof(signed char ));
    // printf("\n%d",sizeof(short int));

    
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
// 2
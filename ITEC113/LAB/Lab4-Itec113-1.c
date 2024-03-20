#include <stdio.h>

int main(){

    // WHILE
    int x = 9, sum = 0;
    printf("Sum = ");
    while (x <= 59){
        if (x == 59){
            printf("%d",x);
        }else { 
            printf("%d + ",x);
        }
        sum += x;
        x += 2;
    }
    printf("\nSum = %d",sum);

    // Do-WHILE
    // int x = 9, sum = 0;
    // printf("Sum = ");
    // do{
    //     if (x == 59){
    //         printf("%d",x);
    //     }else { 
    //         printf("%d + ",x);
    //     }
    //     sum += x;
    //     x += 2;
    // }
    // while (x <= 59);
    // printf("\nSum = %d",sum);

    return 0;
}
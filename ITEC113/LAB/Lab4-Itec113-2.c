#include <stdio.h>

int main(){

    // WHILE
    int lower, upper;
    printf("Please enter the lower limit: ");
    scanf("%d",&lower);
    printf("Please enter the upper limit: ");
    scanf("%d",&upper);
    while (lower <= upper){
        printf("%d\n",lower*lower);
        lower++;
    }

    // Do-WHILE
    // int lower, upper;
    // printf("Please enter the lower limit: ");
    // scanf("%d",&lower);
    // printf("Please enter the upper limit: ");
    // scanf("%d",&upper);
    // do{
    //     printf("%d\n",lower*lower);
    //     lower++;
    // }while (lower <= upper);
    
    return 0;
}
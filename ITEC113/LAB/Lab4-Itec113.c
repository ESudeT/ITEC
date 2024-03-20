#include <stdio.h>

int main(){

    int x = 1, sum = 0;

    while (x <= 10){
        sum += x;
        printf("x: %d\n",x);
        x++;
    }
    printf("Sum: %d",sum);

    return 0;
}
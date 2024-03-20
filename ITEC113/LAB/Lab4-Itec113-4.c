#include <stdio.h>

int numb[10];
void counter();
int largest();
int number(int x);

int main(){
    
    counter();
    printf("Largest Number is : %d",largest());

    return 0;
}

void counter(){

    int x = 0;

    while (x < 10){
        numb[x] = number(x);
        x++;
    }
}

int number(int x) {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    return num;
}


int largest(){

    int largest = numb[0];
    for (size_t i = 0; i < 10; i++){
        if (numb[i] < numb[i+1]){
            largest = numb[i+1];
        } 
    }

    return largest;
}

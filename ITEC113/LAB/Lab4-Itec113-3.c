#include <stdio.h>

int main(){
    
    // WHILE
    int stdnt,aver = 0,i=1;
    while (i <= 20){
        printf("Please enter a mark for student %d: ",i);
        scanf("%d",&stdnt);
        aver += stdnt;
        i++;
    }    
    aver /= 20;
    printf("The Average is %d",aver);

    // Do-WHILE
    // int stdnt,aver = 0,i=1;
    // do{
    //     printf("Please enter a mark for student %d: ",i);
    //     scanf("%d",&stdnt);
    //     aver += stdnt;
    //     i++;
    // }
    // while (i <= 20);
    // aver /= 20;
    // printf("The Average is %d",aver);

    return 0;
}
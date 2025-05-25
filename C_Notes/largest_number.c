#include <stdio.h>
#include <stdlib.h>

int main(void){
    int value1,value2;
    printf("Please enter two value : ");
    scanf("%d %d",&value1,&value2);
    printf("\nValue 1: %d \nValue 2: %d \n",value1,value2);
    if (value1<value2){
        printf("Largest Number: %d\n",value2);
    }
    else if (value1>value2){
        printf("Largest Number: %d\n",value1);
    }
    else {
        printf("%d = %d\n",value1,value2);
    }
    return 0;
}
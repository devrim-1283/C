#include <stdio.h>
#include <stdlib.h>

int main(void){
    int say[3];
    int i=0;
    printf("Enter The Numbers: ");
    while(i<3){
        scanf("%d",&say[i]);
        i++;
    }

    i=0;
    
    while(i<3){
        printf("%d\n",say[i]);
        i++;
    }
    return 0;
}
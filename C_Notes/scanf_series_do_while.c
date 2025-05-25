#include <stdio.h>
#include <stdlib.h>

int main(void){
    int say[5];
    int i=0;

    do{
        scanf("%d",&say[i]);
        i++;
    }while(i<3);

    i=0;

    do{
        printf("%d\n",say[i]);
        i++;

    }while(i<3);
    return 0;
}
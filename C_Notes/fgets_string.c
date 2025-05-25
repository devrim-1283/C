#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char name[30];
    printf("Name: ");
    fgets(name,sizeof(name),stdin); //stdin girmen lazım dosya değilse sizeof la max size verdin
    printf("%s",name);

    return 0;
}
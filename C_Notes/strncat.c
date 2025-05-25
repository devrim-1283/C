#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    char name[100];
    char surname[100];

    printf("Name: ");
    scanf("%s",&name);
    printf("\nSurname: ");
    scanf("%s",&surname);

    strncat(name,surname,3);

    printf("\n%s",name);

    return 0;
}
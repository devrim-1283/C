#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char can[] = "Devrim";
    char canan[100];

    strcpy(canan,can); // kopyalanana sağa kopyalayacağımız sola

    printf("%s",canan);

    return 0;
}
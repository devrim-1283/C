#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char can[]="Devrim";
    char canan[100]=""; // strncpy yaparken boşda olsa atama yapmamız lazım yoksa hata verir

    strncpy(canan,can,3);
    printf("%s",canan);
    return 0;
}
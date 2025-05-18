#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char can[]="abcdef";
    char canan[]="aBCDEF"; //farkı döner
    printf("%d\n",strcmp(can,canan));
    return 0;
}
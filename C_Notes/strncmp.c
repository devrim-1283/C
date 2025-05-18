#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(void){

    char can[]="abcdef";
    char canan[]="aBCDEF"; //farkı döner
    printf("%d\n",strncmp(can,canan,1)); // araya n girerse belirli karaktere kadar yap demek olur
    return 0;

}
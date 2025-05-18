#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14
#undef Pi

int main(void){
    int sayi;

    #ifdef Pi
        sayi =2;
    #else
        sayi =3;
    #endif
    printf("%d",sayi);

    return 0;
}
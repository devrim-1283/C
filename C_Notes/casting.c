#include <stdio.h>
#include <stdlib.h>

int main (void){

    int sayi=9/4;

    printf("%f\n",sayi);
    printf("%d\n",sayi);

    //casting

    float sayi2=9/4;

    printf("%f\n",sayi2);  // gene 2 çıktı 2.25 çıkması yerine



    float sayi3=(float)9/4;

    printf("%f\n",sayi3); // şimdi 2.25 olarak aldı


    return 0;
}
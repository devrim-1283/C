#include <stdio.h>
#include <stdlib.h>

// define da const gibi sabit değerler belirtmek için kullanılır
#define pi 3.14

int main(void) {

    const int sayi =15;
    // const değeri değiştirilmemesini istediğimiz değişkenler için tanımlanır
    printf("%d, %.2f, %.2f",sayi,pi,pi*10);
    return 0;
}

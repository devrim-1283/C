#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sayi = 2,sayi2 = 3, a = 3, b = 4, c = 5;
    
    if (sayi<sayi2){
    
        printf("If is worked\n");
    }
    else {

        printf("Else is worked\n");
    }

    if (a>b){
        printf("2. If is worked\n");
    }
    else if (b<c){
        printf("2. Else If is worked\n");
    }
}
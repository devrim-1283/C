#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sayi=0;

    while (1) {
        ++sayi;
        if (sayi % 2 != 1) {
            continue;
        }
        else {
        printf("%d\n",sayi);
        }
        if (sayi == 101){
            break;
        }
        
    }

    return 0;
}
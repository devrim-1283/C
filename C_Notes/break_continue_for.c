#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sayi;
    for(sayi=0;sayi<100;sayi++){
        if(sayi%2 == 0){
            printf("%d\n",sayi);
        }
        else {
            continue;
        }
        if (sayi == 98){
            break;
        }
    }
    return 0;
}
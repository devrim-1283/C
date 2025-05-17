#include <stdio.h>
#include <stdlib.h>

int main(void){
    int ser[5] = {1,2,3,4,5};
    int i;

    ser[2] = 18;

    for(i=0;i<5;i++){

        printf("%d\n",ser[i]);
    }
    return 0;
}
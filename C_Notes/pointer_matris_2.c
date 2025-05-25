#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tab[100];
    int *t,i;
    
    
    t = tab;

    for(i=0;i<100;i++){

        *(t+i)=0;
    }

    for(i=0;i<100;i++){
        printf("%d ",tab[i]);
    }



    return 0;
}
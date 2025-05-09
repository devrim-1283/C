#include <stdio.h>

int main(void){
    int size;
    float commision;
    printf("Enter The Transaction Size: ");
    scanf("%d",&size);
    if (size>=500000){
        commision=255+((size*0.09)/100);
        printf("Commision: %.2f",commision);
    }
    else if (size>=50000 && size<500000){
        commision = 155 + ((size*0.11)/100);
        printf("Commision: %.2f",commision);    
    }
    else if (size>=20000 && size<50000){
        commision = 100 + ((size*0.22)/100);
        printf("Commision: %.2f",commision);
    }
    else if (size>=6250 && size<20000){
        commision = 76 + ((size*0.34)/100);
        printf("Commision: %.2f",commision);
    }
    else if (size>=2500 && size<6250) {
        commision = 56 + ((size*0.66)/100);
        printf("Commision: %.2f",commision);
    
    }
    else {
        commision = 30 + ((size*1.7)/100);
        printf("Commision: %.2f",commision);
    }
    return 0;
}
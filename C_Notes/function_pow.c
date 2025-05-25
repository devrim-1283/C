#include <stdio.h>
#include <stdlib.h>

void pow(int *a, int *b, int *c ){
    int i;
    *c = 1;
    for(i=0;i<*b;++i){
        *c *= *a;
    }
}


int main(void){
    int sayi,sayi2,result;
    printf("Enter Two Value: ");
    scanf("%d %d",&sayi,&sayi2);
    pow(&sayi,&sayi2,&result);
    printf("Result: %d",result);
    return 0;
}
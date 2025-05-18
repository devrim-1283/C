#include <stdio.h>
#include <stdlib.h>

int main(void){
    int can = 10;
    int *p;

    p = &can;

    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",can);
    printf("%d\n",&can);
  



    int *sayi;
    int n=20;

    sayi=&n;

    printf("%d\n",*sayi);
    printf("%d\n",&n);

    *sayi = 30; // pointeri değiştiridiğimizde n de değişti

    printf("%d\n",n);
    printf("%d\n",&n);




    return 0;
}
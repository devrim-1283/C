#include <stdio.h>
#include <stdlib.h>

int main(void){
    char can[100]="devrim";
    char *pi;

    pi=can; // &can yerine can yazdık çünkü dizilerde can zaten adresi verir
    printf("5. Karakteri %c dir. \n",can[4]);
    printf("2. Karakter %c\n",*(pi+1));

    int dev[4]={1,2,3,4};
    int *p1;

    p1=&dev[0];   // t ve &t[0] eşittir dizilerde int tab[] == *tab
    printf("p1 adres %d \n",p1+1);
    //-8912
    //-8908
    printf("2. Eleman %d\n",*(p1+1)); // 600 601 değil 604 oluyor mesela yukarıdakinden farklı

    return 0;
}
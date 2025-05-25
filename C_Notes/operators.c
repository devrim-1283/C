#include <stdio.h>
#include <stdlib.h>

int main(void){
    /* Arithmetic Operator
     + - * / % ++ -- 
     % kalan operatörüdür
     ++ veya -- solda olursa işlemi azaltıp veya arttırıp işleme girer
     ++ veya -- sağda olursa işleme ilk değeri ile girip azalmış yada arttırılmış değeri ile devam eder
    */

    /*
    Assigment Operator
    = += -= /= %=
    atama operatorleri
    
    */

    /*  
    Comparison Operators
    == != < > >= <=
    karşılaştırma operatorleri
    */

    /* 
    Logical Operators
    && ve
    || veya
    ! değil
    */

    int sayi = 2, sayi2= 3, toplam;
    toplam = ++sayi + sayi2--;

    printf("sayi %d, sayi2 %d, toplam %d\n",sayi,sayi2,toplam);
    printf("kucuktur %d\n",sayi<sayi2);
    printf("buyukyur %d\n",sayi>sayi2);
    printf("%d\n",sayi<sayi2 || sayi>sayi2);
    printf("%d\n",sayi>sayi2 && sayi<toplam);

    return 0;
}
 #include <stdio.h>
 #include <stdlib.h>


void oddeven(int sayi){ // void geri sayı döndürmeyen fonksiyonlar için lazım

    if (sayi%2 ==0){
        printf("%d is even. ",sayi);
    }
    else {

        printf("%d is odd. ",sayi);
    }

 }

 int main(void){
    int sayi;
    printf("Enter Number: ");
    scanf("%d",&sayi);
    oddeven(sayi);

    return 0;
 }



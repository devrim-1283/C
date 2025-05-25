 #include <stdio.h>
 #include <stdlib.h>

 int iseven(int sayi){

    if (sayi%2==0){
        return 1;
    }
    else {
        return 0;
    }
 }
 
 int main(void){
    int sayi;
    printf("Enter Number: ");
    scanf("%d",&sayi);

    if (iseven(sayi)){
        printf("%d is even. ",sayi);
    }
    else {
        printf("%d is odd. ",sayi);
    }

    return 0;
 }


 // fonksiyon tanımlarken içine giren parametrenin data typenı da tanımlamalıyız.
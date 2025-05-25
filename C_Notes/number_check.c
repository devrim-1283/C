#include <stdio.h>
#include <stdlib.h>

void check_number(int sayi,int *even, int *three, int *six){
    if (sayi%2==0){
        *even = 1;
    }
    else {
        * even = 0;
    }
    if (sayi%3==0){
        *three = 1;
    }
    else {
        *three = 0;
    }
    if (sayi%6==0){
        *six = 1;
    } 
    else {
        *six = 0;
    }



}
int main(void){
    int sayi,even,three,six;
    printf("Value: ");
    scanf("%d",&sayi);
    check_number(sayi,&even,&three,&six);
    if (even){
        printf("%d is even.\n",sayi);
    }  
    if (three){
        printf("%d is three coeffienct.\n",sayi);
    }
    if (six){
        printf("%d is six coeffienct.\n",sayi);
    }
    return 0;
}
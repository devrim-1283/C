#include <stdio.h>
#include <stdlib.h>
/*
int carre(int x){

    int sonuc = x*x;
    return sonuc;
}

int main(void){
    int x=4,result;
    result = carre(x);
    printf("%d",result);
    return 0;
}
*/

void carre(int *a, int *b){

    *b=*a**a;
}

int main(void){
    int x=4,result;

    carre(&x,&result);
    printf("%d",result);
    return 0;
}

/*
Bu biraz karmaşık burada return ile döndürmek yerine gittik x ve resultun adresini
fonksiyona gönderdik fonksiyon bu adresleri a ve b ye attı a ve b de yıldız var 
çünkü adreste işlem yapıyorsun sonra result adresinin yeri dönüyor değeri boş olmasına
rağmen ve sen o boş adrese değer atıyorsun */
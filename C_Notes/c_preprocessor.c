#include <stdio.h>
#include <stdlib.h>


/*
Object-like Macros

#define Pi 3.14


Function-like Macros

#define circleArea(r)(Pi*r*r)

Predefined Macros

__DATE__ -- dosyayı güncelleme tarihi
__FİLE__  -- dostyam nerde
__LINE__ -- hangi satırdayız
__STDC__ -- stdc standardı
__TIME__   -- güncelleme zamanı


#include - C kütüphanelerini import etmemizi sağlar 
#define - Object-like, Function-like macros tanımlamamızı sağlar
#undef - define ile tanımladığımız macroyu kaldırmamızı sağlar


#ifdef Macros
 //code                  -- Macro tanımlıysa bu kod çalışır
#endif

#ifdef Macros
//code                    -- Macro tanımlıysa bu kod çalışır
#else
//code                    -- Macro tanımlı değilse bu kod çalışır
#endif



#if (comp)       -- içerdeki comp doğruysa alttaki çalışır 
//code
#else
//code            -- içerdeki comp doğru değilse else çalışır
#endif



#error - hata fırlatmaya neden olur 
*/



#define Pi 3.14
#define circlearea(r) (Pi*r*r)


int main(void){
    int r;
    printf("Enter Radius: ");
    scanf("%d",&r);
    printf("Circle Area: %.2f\n",circlearea(r)); // hangi değişken türünden çıktı olucak dikkat et
    

    printf("Date: %s\n",__DATE__);
    printf("File: %s\n",__FILE__);
    printf("Time: %s\n",__TIME__);
    printf("STDC: %d\n",__STDC__); // dikkat et int döner
    printf("Line: %d\n",__LINE__); // dikkat et int döner

    return 0;
}
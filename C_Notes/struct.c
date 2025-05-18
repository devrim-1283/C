#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tarih {
    int gün;
    int ay;
    int yil;
};


typedef struct 
{
    char isim[10];
    int no;
    char department[30];
} student;

int main(void){
    struct tarih gün1;
    student devrim;
    // eğer charsa strcopy ile int se direkt atayabiliriz değerleri.
    gün1.gün=12;
    gün1.ay=1;
    gün1.yil=2025;

    printf("%d.%d.%d\n",gün1.gün,gün1.ay,gün1.yil);


    strcpy(devrim.isim,"Devrim");
    devrim.no=220254086;
    strcpy(devrim.department,"Ceng");

    printf("%s %d %s ",devrim.isim,devrim.no,devrim.department);

    return 0;
}
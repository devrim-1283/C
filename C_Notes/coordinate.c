#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    float x;
    float y;
} coor;

int main(void){
    coor cor1;
    strcpy(cor1.name,"Kosegen");
    cor1.x=3.14;
    cor1.y=5;
    printf("%s %.2f %.2f ",cor1.name,cor1.x,cor1.y);

    return 0;
}
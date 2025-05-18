#include <stdio.h>
#include <stdlib.h>

int main(void){
    int say[2][3][2] = {{{2,4},{5,6},{7,8}},{{9,10},{12,14},{16,18}}};

    printf("%d",say[1][1][1]);

    return 0;
}
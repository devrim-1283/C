#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char can[100][100]={"devrim","esma"};

    printf("%s",can[1]);
    printf("\n%c\n",can[0][5]);
    return 0;
}
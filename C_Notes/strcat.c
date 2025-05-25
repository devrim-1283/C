#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(void){

    char can[100]="devrim ";  // birleştirme yaparken byte yazmak zorundasın
    char canan[100]= "tuncer";

    strcat(can,canan);

    printf("%s",can);
    strcat(can," alkü");
    printf("\n%s\n",can);
    return 0;
}
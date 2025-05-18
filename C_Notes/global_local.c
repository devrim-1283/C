#include <stdio.h>
#include <stdlib.h>
void can() {

    int x = 2;
    printf("In Function %d\n",x);
}
int main(void){
    int x = 3;
    can();
    printf("X %d ",x);
    return 0;
}
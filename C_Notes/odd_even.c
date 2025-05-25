#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numbe;
    printf("Enter The Number: ");
    scanf("%d",&numbe);
    if (numbe%2==1) {
        printf("%d is odd number.\n",numbe);
    }
    else {
        printf("%d is even number\n",numbe);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int say[5];
    int i;
    printf("Enter The Value: ");
    for(i=0;i<5;i++){
        scanf("%d",&say[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\n",say[i]);
    }
    return 0;
}
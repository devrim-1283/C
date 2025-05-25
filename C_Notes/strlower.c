#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char name[100];
    int i;
    printf("Enter The Name: ");
    fgets(name,sizeof(name),stdin);

    for(i=0;i<sizeof(name);++i){
        if (name[i]>='A' && name[i]<='Z'){
            name[i] = name[i]+32;
        }

    }



    printf("%s",name);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main(void){
    char name[100];
    char *po,*pi;
    int control;

    printf("Enter The Value: ");
    fgets(name,sizeof(name),stdin);

    for(po=name;*po;po++);
    po--;
    po--;

    control = 1;
    for(pi=name;pi<po;pi++,po--){
        if (*pi != *po){
            control =0;
        }
        if (!control){
            break;
        }
    }
    if (control){
        printf("%s is polindrom number.",name);
    }
    else{
        printf("%s is not polindrom number.",name);
    }

    

    

    return 0;
}

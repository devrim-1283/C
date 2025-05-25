#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char a[100]="devrim esma ali";
    char *p;

    p = strchr(a, 'e');
    printf("%s",p);

    return 0;
}
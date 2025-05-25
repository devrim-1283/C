#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char deger[20];
    int i;
    printf("deger:");
    fgets(deger,sizeof(deger),stdin);


    for(i=0;i<sizeof(deger);i++){

        if('a'<deger[i] && deger[i]< 'z'){
            deger[i]-=32;
        }
    }
    printf("%s\n",deger);

    return 0;
}

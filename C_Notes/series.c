#include <stdio.h>
#include <stdio.h>

int main(void){
    int i;
    short series[5]={1,2,3,4,5};

    for(i=0;i<5;i++){
        printf("%d\n",series[i]);
    }

    short ser[5];

    for(i=0;i<5;i++){
        ser[i] = ((i+1)*2);
    }
    for(i=0;i<5;i++){
        printf("%d\n",ser[i]);
    }
    return 0;
}
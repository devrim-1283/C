#include <stdio.h>
#include <stdlib.h>

int main(void){
    int say[2][2]={{2,5},{6,17}};
    int say2[2][2]={{5,16},{1,12}};
    int sum[2][2];
    int i,j;

    for (i=0;i<2;++i){
        for(j=0;j<2;++j){
            sum[i][j] = say[i][j]+say2[i][j];
        }
    }

    for (i=0;i<2;++i){
        for(j=0;j<2;++j){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
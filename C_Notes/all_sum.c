#include <stdio.h>
#include <stdlib.h>

int main(void){
    int value,i,sum = 0;
    printf("Enter The Value: ");
    scanf("%d",&value);
    for(i=1;i<=value;i++){
        sum +=i;
    }
    printf("Sum: %d\n",sum);
    return 0;

}
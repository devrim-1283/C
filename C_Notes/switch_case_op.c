#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numb,numb2;
    char op;

    printf("\nEnter the two number: ");
    scanf("%d %d",&numb,&numb2);
    
    printf("\nEnter the op : ");
    scanf(" %c",&op);
    

    switch(op){
        case '+':{
            printf("Result: %d",numb+numb2);
            break;
        }
        case '-':{
            printf("Result: %d",numb-numb2);
            break;
        }
        case '*':{
            printf("Result: %d",numb*numb2);
            break;
        }
        case '/':{
            printf("Result: %f",numb/numb2);
            break;
        }
        default: {
            printf("Error...");
            break;
        }
    }
    return 0;
}
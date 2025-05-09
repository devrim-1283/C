#include <stdio.h>

int main(void){
    int pay,payda,pay2,payda2,result_pay,result_payda;

    printf("Enter First Fraction: ");
    scanf("%d/%d",&pay,&payda);

    printf("\nEnter Second Fraction: ");
    scanf("%d/%d",&pay2,&payda2);

    result_pay = pay * payda2 + pay2 * payda;
    result_payda = payda * payda2;

    printf("\nResult = %d/%d\n",result_pay,result_payda);
    
    return 0;
}
#include <stdio.h>

int main (void) {

    // Step 1
    double acc;
    printf("Enter The Initial Account Balance: ");
    scanf("%lf",&acc);
    printf("\nInitial Account Balance: %.2lf\n",acc);


    // Step 2
    double withdrawal = acc / 2.0;
    double result = acc - withdrawal;
    printf("Half of the current balance was withdrawn.\n");
    printf("First Withdrawal: %.2lf\n",withdrawal);
    printf("Remaining Balance: %.2lf\n",result);



    // Step 3
    double update = 300;
    double new_balance = result + update;
    printf("Total Update: %.2lf\n",update);
    printf("New Account Balance: %.2lf\n",new_balance);



    // Step 4 
    printf("Using --balance: %.2lf\n",--new_balance);
    printf("Using balance--: %.2lf\n",new_balance--);

    double second_withdrawal = 500;
    new_balance -= second_withdrawal;
    printf("Second Withdrawal: %.2lf\n",second_withdrawal);
    printf("Remaining Account Balance: %.2lf\n",new_balance);


    // Step 5
    printf("Using Balance++ : %.2lf\n",new_balance++); // Sınav sorusu gelir
    printf("Using ++Balance : %.2lf\n",++new_balance);
    

    new_balance *= 2;
    printf("Account Balance doubled to %.2lf\n",new_balance);

    return 0;
}
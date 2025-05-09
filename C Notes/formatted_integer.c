#include <stdio.h>


int main(void) {
    int x=9,y=11,a=198,b=112;


    // default
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    //formated
    printf("x = %4d.\n",x);
    printf("y = %-4d.\n",y);
    printf("a = %.8d.\n",a);
    printf("b = %05d.\n",b);
    printf("b = %0.5d.\n",b);
    printf("b = %10.5d.\n",b);

    return 0;

}

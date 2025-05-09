#include <stdio.h>

int main(void) {
    float a=123.2, b=152.215125125, x=112124124,y=156124124;

    //default
    printf("x = %e.\n",x);
    printf("y = %12.4e.\n",y);
    printf("a = %-10.2e.\n",a);
    printf("b = %.1e.\n",b);

    return 0;

}
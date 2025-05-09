#include <stdio.h>

int main(void) {
    float a=123.2, b=152.215125125, x=11,y=156124124;

    //default
    printf("x = %g.\n",x);
    printf("y = %12.4g.\n",y);
    printf("a = %-10.2g.\n",a);
    printf("a = %-10.1g.\n",a);
    printf("a = %-10.0g.\n",a);
    printf("b = %-8g.\n",b);
    printf("b = %.2g.\n",b);

    return 0;
}
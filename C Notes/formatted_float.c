#include <stdio.h>


int main(void) {
    float x=9.3,y=11.124,a=198.125125125,b=112.999;


    // default
    printf("x = %f\n",x);
    printf("y = %f\n",y);
    printf("a = %f\n",a);
    printf("b = %f\n",b);

    //formated
    printf("x = %15f.\n",x);
    printf("y = %-15f.\n",y);
    printf("a = %.2f.\n",a);
    printf("b = %15.0f.\n",b);
    printf("b = %-15.5f.\n",b);


    return 0;

}

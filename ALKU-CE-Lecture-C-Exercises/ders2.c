#include <stdio.h>

int main(void) {
    int i,j;
    float x, y;

    printf("Enter two integers and two floating-point numbers: ");
    scanf("%d %d %f %f", &i, &j, &x, &y);


    printf("1. %d\n",i);
    printf("2. %5d\n",j);
    printf("3. %-5d\n", i);
    printf("4. %d\n");
    return 0;
}
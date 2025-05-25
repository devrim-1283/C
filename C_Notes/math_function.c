#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    /*
    ceil yukarı yuvarlama
    floor aşağı yuvarlama
    sqrt karekök alma
    pow üs alma
    abs mutlak değer alma
    */
    printf("%.2f\n",ceil(4.3));
    printf("%.2f\n",floor(4.3));
    printf("%.2f\n",sqrt(64));
    printf("%.2f\n",pow(4,2));
    printf("%d\n",abs(-4)); // %d ile yazdırmalısın absyi yoksa görmez
    return 0;
}
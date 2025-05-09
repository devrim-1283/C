
#include <stdio.h>

int main(void){
	float lenght,height,width;
	lenght = 10.123;
	height = 12.1255;
	width = 5.787643;
	printf("Lenght: %f, Height: %f, Width: %f\n",lenght,height,width);
    printf("Lenght: %.2f, Height: %.2f, Width: %.2f\n",lenght,height,width);
    printf("Lenght: %.1f, Height: %.1f, Width: %.1f\n",lenght,height,width);
    printf("Lenght: %.10f, Height: %.10f, Width: %.10f\n",lenght,height,width);
	return 0;


}

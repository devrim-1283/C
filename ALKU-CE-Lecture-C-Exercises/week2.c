#include <stdio.h>

int main(void) {
    int i=12512,j=256;
    float x=1242.125125,y=25.212225;

    printf("1. %d.\n",i);
    printf("2. %5d.\n",j);
    printf("3. %-5d.\n",i);
    printf("4. %03d.\n",j);
    printf("5. %d.\n\n,j");

    printf("6. %10.3f.\n",x);
    printf("7. %7.2f.*n",y);
    printf("8. %-10.1f.\n",x);
    printf("9. %.0f.\n",y);
    printf("10. %10.4f.\n\n",x);

    printf("11. %g.\n",x);
    printf("12. %10.5g.\n",y);
    printf("13. %-8g.\n",x);
    printf("14. %.2g.\n",y);
    printf("15. %10.3g\n",x);

    printf("16. %e.\n",x);
    printf("17. %12.4e.\n",y);
    printf("18. %-10.2e.\n",x);
    printf("19. %.1e.\n",y);
    printf("20. %10.4e.\n",x);
    
    return 0;
}
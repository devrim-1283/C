#include <stdio.h>
#include <stdlib.h>

#define power 5

#if !defined(power) || power < 3
#error "Power is not defined or power less than 7"
#endif

int main(void) {
    return 0;
}

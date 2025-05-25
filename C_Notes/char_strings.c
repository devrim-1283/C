#include <stdio.h>
#include <stdlib.h>

int main(void){
    char can[] = {'c','a','n','a','n','\0'}; // böyle tanımlayacaksak \0 koymak zorundayız
    char dizim[] = "canan";

    printf("%s\n",dizim);
    printf("%s\n",can);
    return 0;
}
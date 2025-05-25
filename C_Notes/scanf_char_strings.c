#include <stdio.h>
#include <stdio.h>

int main(void){
    char car[100]; // Eğer tanımlamayacaksak car'ı max kaç byte olmasını girmemiz lazım
    printf("Enter The Name: ");
    scanf("%s",&car);
    printf("\n%s\n",car);

    car[5] = 'n';
    printf("%s\n",car);
    return 0;
}
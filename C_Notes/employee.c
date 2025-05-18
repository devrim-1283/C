#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{

    char name[20];
    char surname[20];
    int salary;

    };

void update_salary(struct employee* x,int a){
     x->salary = a;

}

int main(){
    int a;


    struct employee devrim={"devrim","tunçer",20000};

    printf("enter update salary: ");
    scanf("%d",&a);
    update_salary(&devrim,a);
    printf("%d ",devrim.salary);


    return 0;
}
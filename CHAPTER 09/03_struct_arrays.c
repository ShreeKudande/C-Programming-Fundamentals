#include <stdio.h>

struct employee
{
        int code;
        float salary;
        char name[10];
};


int main(void){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee shree = {100, 12.55, "Shree"};
    printf("%d %2.f %s", shree.code, shree.salary, shree.name);

    return 0;

}


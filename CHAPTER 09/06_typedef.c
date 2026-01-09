#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[10];
    int id;
    float salary;
}Emp;

int main(void){
    // typedef int shree;
    // shree a = 88;
    // printf("%d", a);
    
    // struct employee e1;
    // typedef struct employee Emp;
    Emp e1;
    strcpy(e1.name, "Shree");
    e1.id = 5454;
    e1.salary = 12.5;

    printf("%s %d %2.f", e1.name, e1.id, e1.salary);
    return 0;
}


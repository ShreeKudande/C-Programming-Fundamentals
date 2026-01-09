#include <stdio.h>
#include <string.h>
struct employee
{
    char name[10];
    int id;
    float salary;
};

void show(struct employee e);

void show(struct employee e) {
    printf("Employee name is %s, id is %d & salary is %2.f.", e.name, e.id, e.salary);
}


int main(void){
    struct employee e1;
    strcpy(e1.name, "Shree");
    e1.id = 5454;
    e1.salary = 12.5;
    show(e1);
    return 0;
}


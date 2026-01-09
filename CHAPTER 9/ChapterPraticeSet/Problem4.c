//Q.Write a program to illustrate the use of arrow operator → in C. 

#include <stdio.h>

struct employee
{
        int id;
};


int main(void){
    
    struct employee e1;
    e1.id = 5454;
    struct employee* ptr = &e1;
    printf("%d", ptr->id); //(*ptr).id -- wee used -> for ease
    return 0;
}

//Quick Quiz: Write a program to store the details of 3 employees from user defined data. Use the structure declared above.

#include <stdio.h>

struct employee 
{
        char name[100];
        int id;
        float salary;
};

int main(void){
    struct employee arr[3];
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of employee %d : ", i + 1);
        scanf("%s", &arr[i].name);

        printf("Enter the id of employee %d : ", i + 1);
        scanf("%d", &arr[i].id);

        printf("Enter the salary of employee %d : ", i + 1);
        scanf("%f", &arr[i].salary);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d : Name-%s Id-%d Salary-%2.f \n", i + 1, arr[i].name, arr[i].id, arr[i].salary);
    }
    
    return 0;
}

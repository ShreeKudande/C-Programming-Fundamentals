#include <stdio.h>
//Best Themes Redefined🚀 - Material Dark Theme
int main(void)
{
    int i = 72;
    int* j = &i; //J is a pointer pointing to i (J is an integer pointer)
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&i));
    return 0;
}
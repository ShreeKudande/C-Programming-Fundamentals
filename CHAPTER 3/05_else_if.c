#include <stdio.h>

int main(void)
{
    int age = 50;

    // The difference between else_if from the normal if_else is that, else_if stops if the first or second or soo forth, becomes true, and gives output and come outs of the if_else.

    if (age > 60)
    {
        printf("You can drive & you are a senior citizen");
    }
    else if (age > 40)
    {
        printf("You can drive & you are a elder");
    }
    else if (age > 18)
    {
        printf("You can drive!");
    }
    else
    {
        printf("You can not drive");
    }

    return 0;
}
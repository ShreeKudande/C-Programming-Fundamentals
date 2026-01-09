// Q.Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int main(void)
{

    char c = 'z';
    char str[] = "Shree";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count = 1;
            break;
        }
    }
    if (count)
    {
        printf("Yes it contains\n");
    }
    else
    {
        printf("Does not contain\n");
    }

    return 0;
}

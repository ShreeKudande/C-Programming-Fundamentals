#include <stdio.h>

int main(void)
{
    // Q.Write a program to determine whether a character entered by the user is lowercase or not.

    char ch;
    printf("Enter the Character:\n");
    scanf("%c", &ch);

    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);

    if (ch >= 97)
    {
        printf("The Character is Lowercase");
    }
    else
    {
        printf("The Character is Uppercase");
    }

    return 0;
}

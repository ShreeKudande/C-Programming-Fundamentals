#include <stdio.h>

int main(void)
{
    /*
    Q.Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.
    */
    int p, c, m;

    printf("Enter Marks of Physics:\n");
    scanf("%d", &p);
    printf("Enter Marks of Chemistry:\n");
    scanf("%d", &c);
    printf("Enter Marks of Math:\n");
    scanf("%d", &m);

    int percentage = (p + c + m) / 3;

    if (percentage >= 40 && p >= 33 && c >= 33 && m >= 33)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    printf("Your Percentage is %d%%", percentage);

    return 0;
}
#include <stdio.h>

int main(void)
{
    //Q.10. Write a program to check whether a given number is prime or not using loops.

    int n = 5;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not Prime\n", n);
    }
    else
    {
        printf("%d is a Prime\n", n);
    }

    return 0;
}


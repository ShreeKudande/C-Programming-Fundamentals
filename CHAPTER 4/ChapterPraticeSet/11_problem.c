#include <stdio.h>

int main(void)
{
    // Q.Implement 10 using other types of loops.
    int n = 10;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        while (i < n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
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

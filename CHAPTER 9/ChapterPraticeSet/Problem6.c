// Q.Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.
#include <stdio.h>

typedef struct complex_numbers
{
    int real_part;
    int imginary_part;
} complex;

void display(complex c)
{
    printf("%d + %di\n", c.real_part, c.imginary_part);
}

int main(void)
{
    complex n[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d real part\n", i + 1);
        scanf("%d", &n[i].real_part);

        printf("Enter %d imaginary part\n", i + 1);
        scanf("%d", &n[i].imginary_part);
        
        display(n[i]);
    }

    return 0;
}

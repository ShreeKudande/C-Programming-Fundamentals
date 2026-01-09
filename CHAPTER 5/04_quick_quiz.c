#include <stdio.h>
#include <math.h>

//Quick Quiz: Use the library function to calculate the area of a square with side a.

int main(void) {
    int a = 5;
    printf("Area of square with side %d is %.2f\n", a, pow(a, 2));
    return 0;
}
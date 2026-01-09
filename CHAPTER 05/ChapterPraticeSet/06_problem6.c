#include <stdio.h>
// Q.Write a recursive function to calculate the sum of first ‘n’ natural numbers.

int sum_natural(int);

int sum_natural(int n) {
    if(n==1){
        return 1;
    }
    // sum(n) = 1 + 2 + 3 + 4 + 5 + ...n-1 + n;
    // sum(n) = sum(n-1) + n;
    return sum_natural(n-1) + n;
}

int main(void)
{
    int n = 10;
    printf("The sum of first %d natural numbers is %d", n, sum_natural(n));

    return 0;
}

/*
Let’s trace what happens when you call sum(10) in the recursive function.

The rule is:
sum(n) = n + sum(n - 1)
and
sum(0) = 0

Now step-by-step:

sum(10) = 10 + sum(9)
sum(9)  = 9 + sum(8)
sum(8)  = 8 + sum(7)
sum(7)  = 7 + sum(6)
sum(6)  = 6 + sum(5)
sum(5)  = 5 + sum(4)
sum(4)  = 4 + sum(3)
sum(3)  = 3 + sum(2)
sum(2)  = 2 + sum(1)
sum(1)  = 1 + sum(0)
sum(0)  = 0


Now it adds back up (return phase):

sum(1) = 1 + 0  = 1
sum(2) = 2 + 1  = 3
sum(3) = 3 + 3  = 6
sum(4) = 4 + 6  = 10
sum(5) = 5 + 10 = 15
sum(6) = 6 + 15 = 21
sum(7) = 7 + 21 = 28
sum(8) = 8 + 28 = 36
sum(9) = 9 + 36 = 45
sum(10)=10 + 45 = 55


Final Answer:
Sum of first 10 natural numbers = 55

It’s like a staircase — you keep climbing down (calling the function with smaller numbers) until you reach 0, then you climb back up adding everything.
*/
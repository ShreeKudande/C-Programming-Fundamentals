#include <stdio.h>

int main(void){
    //Q.Write a progarm to implement program 5 using 'for' and 'do-while' loop.

    //for Loop
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum +=i;
    }
    printf("%d\n", sum);
    
    //do-while
    int j = 0, tot = 0;
    do
    {
        tot +=j;
        j++;
    } while (j <= 10);
    printf("%d\n", tot);

    return 0;
}
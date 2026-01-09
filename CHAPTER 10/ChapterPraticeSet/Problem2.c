//Q.Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

#include <stdio.h>

int main(void){
    FILE *ptr;

    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    ptr = fopen("P2.txt", "w");
    
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d", num*i);
        fprintf(ptr, "%c", '\n');
    }
    
    return 0;
}

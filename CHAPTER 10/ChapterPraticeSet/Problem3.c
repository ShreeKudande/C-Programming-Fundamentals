//Q.Write a program to read a text file character by character and write its content twice in separate file.

#include <stdio.h>

int main(void){
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("P3.txt", "r");
    ptr2 = fopen("P3_2.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        // When all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}


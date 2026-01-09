#include <stdio.h>

int main(void){
    char ch;
    FILE *ptr;
    ptr = fopen("shree.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        // When all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
    }
    return 0;
}


#include <stdio.h>

int main(void){
    char str1[] = "Shree";
    for (int i = 0; i < sizeof(str1); i++)
    {
        printf("The cha at %d is %c\n", i, str1[i]);
    }
    printf("\n");
    
    char str2[] = "Shri";
    printf("%s\n", str2); // Same as writing for loop in str1 Case (%s)

    return 0;
}

/*
Output:-
The cha at 0 is S
The cha at 1 is h
The cha at 2 is r
The cha at 3 is e
The cha at 4 is e
The cha at 5 is   --> \0 [Null Cha]
*/


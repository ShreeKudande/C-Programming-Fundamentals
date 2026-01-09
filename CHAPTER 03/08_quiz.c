#include <stdio.h>

// Quick Quiz: Write a program to find grade of a student given his marks based on below:
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F

int main(void){
    int grade;
    printf("Enter Your Grade:\n");
    scanf("%d", &grade);

    if (grade>90)
    {
        printf("A");
    } 
    else if (grade>80)
    {
        printf("B");
    } 
    else if (grade>70)
    {
        printf("C");
    }
    else if (grade>60)
    {
        printf("D");
    }
    else if (grade>50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    
    
    return 0;
}


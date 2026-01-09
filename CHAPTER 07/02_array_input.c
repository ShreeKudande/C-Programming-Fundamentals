#include <stdio.h>

int main(void){
    // int marks1[5];
    // printf("Enter marks1 of 5 students:\n");
    
    // scanf("%d", &marks1[0]); 
    // scanf("%d", &marks1[1]); 
    // scanf("%d", &marks1[2]); 
    // scanf("%d", &marks1[3]); 
    // scanf("%d", &marks1[4]); //The Index of an array of size n goes from 0 to n - 1
    
    // printf("Marks1 0 is %d\n", marks1[0]);
    // printf("Marks1 1 is %d\n", marks1[1]);
    // printf("Marks1 2 is %d\n", marks1[2]);
    // printf("Marks1 3 is %d\n", marks1[3]);
    // printf("Marks1 4 is %d\n", marks1[4]);
    
    //Using Loop
    int marks2[5];
    printf("Enter marks2 of 5 students:\n");
    //Takes Marks
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks2[i]);
    }
    //Prints Marks
    for (int  j = 0; j < 5; j++)
    {
        printf("Marks2 %d is %d\n", j, marks2[j]);
    }
    
    return 0;
}
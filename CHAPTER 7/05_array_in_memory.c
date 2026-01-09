#include <stdio.h>

int main(void){
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
        printf("The address of marks at index %d is %u\n", j, &marks2[j]);
    }
    /*
    OutPut:- 
    The address of marks at index 0 is 6422276
    The address of marks at index 1 is 6422280
    The address of marks at index 2 is 6422284
    The address of marks at index 3 is 6422288
    The address of marks at index 4 is 6422292
    */
    return 0;
}
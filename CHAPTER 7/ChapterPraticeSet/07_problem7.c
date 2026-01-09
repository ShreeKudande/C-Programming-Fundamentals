#include <stdio.h>
//Q.Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

int main(void){
    int arr[3][10];
    int mul[] = {2, 7, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }
    
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Think of the arr[3][10] array as a grid with 3 rows and 10 columns.

The outer loop (for (int i = 0; ...) controls which row you are on.

The inner loop (for (int j = 0; ...) controls which column you are in.

The mul[] array ({2, 7, 9}) determines which multiplication table to use for each row.

i=0 uses mul[0] (which is 2)

i=1 uses mul[1] (which is 7)

i=2 uses mul[2] (which is 9)
*/

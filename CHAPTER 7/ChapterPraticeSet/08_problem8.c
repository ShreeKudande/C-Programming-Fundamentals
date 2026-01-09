#include <stdio.h>
//Q.Repeat problem 7 for a custom input given by the user

int main(void){
    int arr[3][10];
    int mul[3];

    printf("Enter the Numbers:- \n");
    scanf("%d %d %d", &mul[0], &mul[1], &mul[2]);

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


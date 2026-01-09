#include <stdio.h>
// Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

int main(void)
{
    int arr[3][2];
    //  int arr[R][C];
    //  int arr[i][j];

    // Taking input from the User
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    /*
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
            }
        }
    */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    /*              Col0 Col1
    int arr[3][2] = {00, 01} //Row 0
                    {10, 11} //Row 1
                    {20, 21} //Row 2
    Enter the value of arr[0][0]
    1
    Enter the value of arr[0][1]
    2
    Enter the value of arr[1][0]
    3
    Enter the value of arr[1][1]
    4
    Enter the value of arr[2][0]
    5
    Enter the value of arr[2][1]
    6
    The value of arr[0][0] is 1
    The value of arr[0][1] is 2
    The value of arr[1][0] is 3
    The value of arr[1][1] is 4
    The value of arr[2][0] is 5
    The value of arr[2][1] is 6

    int arr[3][2] = {1, 2}
                    {3, 4}
                    {5, 6}
    */

    return 0;
}

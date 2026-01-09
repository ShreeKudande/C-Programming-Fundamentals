#include <stdio.h>
//Q.Repeat problem 3 for a general input provided by the user using scanf.
int main(void){
    int arr[10];
    printf("Enter the Number :\n");
    int user;
    scanf("%d", &user);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = user*(i+1);
        printf("%d x %d = %d\n",user, i+1, arr[i]);
    }
    
    return 0;
}
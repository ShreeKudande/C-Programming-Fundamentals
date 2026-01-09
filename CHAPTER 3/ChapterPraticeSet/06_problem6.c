#include <stdio.h>

int main(void){
    //Q.Write a program to find greatest of four numbers entered by the user.
    int a,b,c,d;
    printf("Enter four numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d)
    {
        printf("The greatest of all is %d", a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("The greatest of all is %d", b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("The greatest of all is %d", c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("The greatest of all is %d", d);
    }
    

    return 0;
}
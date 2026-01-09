// Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.

#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("shree.txt", "r");
    if (ptr == NULL)
    {
        printf("The File does not exist\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        return 0;
    }

    fclose(ptr);

    return 0;
}
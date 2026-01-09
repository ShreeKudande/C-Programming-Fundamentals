// Q.Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>

struct Date
{
    int mm;
    int dd;
    int yyyy;
};

// 1 if the first date (d1) is later than the second (d2).

// -1 if the first date (d1) is earlier than the second (d2).

// 0 if the dates are the same.

int compare(struct Date d1, struct Date d2)
{
   // 1. Compare years
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }

    // 2. If years are the same, compare months
    if (d1.mm > d2.mm)
    {
        return 1;
    }
    if (d1.mm < d2.mm)
    {
        return -1;
    }

    // 3. If months are also the same, compare days
    if (d1.dd > d2.dd)
    {
        return 1;
    }
    if (d1.dd < d2.dd)
    {
        return -1;
    }

    // 4. If all are the same, the dates are equal
    return 0;
}

int main(void)
{

    struct Date d1 = {11, 1, 2007}, d2 = {11, 1, 2007};
    printf("%d", compare(d1, d2));
    return 0;
}

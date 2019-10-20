#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, count;
    printf("Prime number between 1 and 300 are:");
    for (i = 2; i <= 300; i++)
    {
        // printf("\ni=%d", i);
        count = 0;
        for (j = 2; j <= i - 1; j++)
        {
            // printf("\ni=%d, j=%d, count=%d", i, j, count);
            if ((i % j) == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("\n%d", i);
        }
    }
}
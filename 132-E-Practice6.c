#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    //printf("%d",i);
    {
        for (j = 1; j < i; j++)
        {
            //printf("%d", j);
            printf(" ");
        }

        for (k = 1; k <= (rows * 2 - (2 * i - 1)); k++)
        {
            // printf("%d",k);
            printf("*");
        }

        printf("\n");
    }
}
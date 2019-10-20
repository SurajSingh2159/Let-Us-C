#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    //printf("%d",i);
    {

        for (j = 1; j <= (rows * 2 - (2 * i - 1)); j++)
        {
            // printf("%d",k);
            printf("*");
        }

        printf("\n");
    }
}
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k, rows;
    printf("Enter the number of rows");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i; j--)
        {
            printf("%d", j);
            printf("*");
        }
        for (k = 2; k <= (2 * i - 1); k++)
        {

            printf(" ");
        }
        for (j = rows; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
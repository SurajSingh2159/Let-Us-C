#include <stdio.h>
#include <conio.h>
void main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= 30; i++)
        printf("%d * %d = %d\n", num, i, num * i);
}
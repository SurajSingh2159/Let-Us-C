#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    if (n < 0)
        n = n * -1;
    printf("the absolute value of number = %d", n);
}
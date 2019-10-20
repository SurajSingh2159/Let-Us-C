#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 1, y;
    float fact, sum = 0;
    for (x = 1; x <= 7; x++)
    {
        fact = 1;
        for (y = 1; y <= x; y++)
            fact = fact * y;
        sum = sum + x / fact;
        x++;
    }
    printf("sum of series = %f", sum);
}
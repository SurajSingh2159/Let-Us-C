#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("enter the three sides of a triangle");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("a is a larger side=%d", a);
    if (b > c && b > a)
        printf("b is a larger side=%d", b);
    if (c > a && c > b)
        printf("c is a larger side=%d", c);
}
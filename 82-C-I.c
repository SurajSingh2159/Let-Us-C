#include <stdio.h>
#include <conio.h>
void main()
{
    int l, b, area, peri;
    printf("Enter the length and breadth of a rectangle");
    scanf("%d%d", &l, &b);
    area = l * b;
    peri = 2 * (l + b);
    if (area > peri)
        printf("the area is greater than perimeter by = %d", area);
    else
        printf("the area is lesser than perimeter by = %d", peri);
}
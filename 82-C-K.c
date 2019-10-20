#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, r, h, d;
    printf("\nEnter the radius of a circle and cordinates of the point(x,y)");
    scanf("%d%d%d", &x, &y, &r);
    h = x * x + y * y;
    d = r * r;
    if (h == d)
        printf("\ntthe points are on the circle\n");
    else
    {
        if (h > d)
            printf("\ntthe points are outside the circle\n");
        else
            printf("\ntthe points are inside the circle\n");
    }
}
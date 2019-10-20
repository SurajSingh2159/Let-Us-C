#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    printf("\nEnter the cordinates of the point(x,y)");
    scanf("%d%d", &x, &y);
    if ((x == 0) && (y == 0))
        printf("\ntthe points lies on the origin\n");
    else
    {
        if ((x == 0) && (y != 0))
            printf("\ntthe points lies on y-axis\n");
        else if ((x != 0) && (y == 0))
            printf("\ntthe points lies on x-axis\n");
        else
            printf("points doesnt lies on any of the axis, nor origin");
    }
}
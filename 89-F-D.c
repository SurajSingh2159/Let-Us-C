#include <stdio.h>
#include <conio.h>
void main()
{
    int h, c, t;
    printf("\nEnter a values of h,c,t");
    scanf("%d%d%d", &h, &c, &t);
    if (h > 50 && c < 0.7 && t > 5600)
        printf("\ngrade 10 of steel\n");
    else if (h > 50 && c < 0.7)
        printf("\ngrade 9 of steel\n");
    else if (c < 0.7 && t > 5600)
        printf("\ngrade 8 of steel\n");
    else if (h > 50 && t > 5600)
        printf("\ngrade 7 of steel\n");
    else if (h > 50 || c < 0.7 || t > 5600)
        printf("\ngrade 6 of steel\n");
    else
        printf("\ngrade 5 of steel\n");
}

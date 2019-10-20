#include <stdio.h>
#include <conio.h>
void main()
{
    float cp, sp, p, l, p_per, l_per;
    printf("Enter cost price and selling price");
    scanf("%f%f", &cp, &sp);
    p = sp - cp;
    l = cp - sp;
    if (p > 0)
        printf("the seller has made a profit", p);
    if (l > 0)
        printf("the seller has made a loss", l);

    if (l == 0)
        printf("the seller has neither made profit nor loss");
}
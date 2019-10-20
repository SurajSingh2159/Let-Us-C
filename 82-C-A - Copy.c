#include <stdio.h>
#include <conio.h>
void main()
{
    float cp, sp, p, l, p_per, l_per;
    printf("Enter cost price and selling price");
    scanf("%f%f", &cp, &sp);
    p = sp - cp;
    l = cp - sp;
    p_per = p * 100 / cp;
    l_per = l * 100 / cp;
    if (p > 0)
        printf("The seller has made a profit of Rs. %f i.e.,  percent= %f", p, p_per);
    if (l > 0)
        printf("the seller has made a loss of Rs. %f i.e.,  percent = %f", l, l_per);

    if (l == 0)
        printf("the seller has neither made profit nor loss");
}
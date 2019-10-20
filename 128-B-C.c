#include <stdio.h>
#include <conio.h>
void main()
{
    int b, p, o = 1, i = 1;
    printf("enter two numbers for base and power");
    scanf("%d%d", &b, &p); // b=2, p=3
    while (i <= p)
    {
        o = o * b;
        i++;
    }
    printf("%d to the power %d is %d", b, p, o);
}
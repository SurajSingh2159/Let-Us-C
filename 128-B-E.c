#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1,a,b,c;
    printf("Armstrong number between 1 and 500 is");
    while (i <= 255)
    {
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        printf("%d\n", i);
        i++;
    }
}
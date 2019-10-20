#include <stdio.h>
#include <conio.h>
void main()
{
    int p, n, z, num;
    char ans = 'Y';
    p = n = z = 0;
    while (ans == 'Y')
    {
        printf("enter a number");
        scanf("%d", &num);
        if (num == 0)
            z++;
        if (num > 0)
            p++;
        if (num < 0)
            n++;
        printf("want to continue?");
        scanf("%c", &ans);
    }
    printf("you have entered positive numbers=%d", p);
    printf("you have entered negative numbers=%d", n);
    printf("you have entered zeros", z);
}
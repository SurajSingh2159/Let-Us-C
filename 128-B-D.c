#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0;
    while (i <= 255)
    {
        printf("%d%c\n", i, i);
        i++;
    }
}
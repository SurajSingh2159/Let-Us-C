#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("\nEnter the number of days");
    scanf("%d", &n);
    if (n <= 5)
        printf("\nfine is 50 paise\n");
    else if (n > 5 && n <= 10)
        printf("\nfine is 1 ruppee\n");
    else if (n > 10 && n < 30)
        printf("\nfine is 5 ruppee\n");
    else
        printf("\nmembership cancelled\n");
}

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, n1, n2, n3, n4, n5, y;
    printf("Enter any five digit number");
    scanf("%d", &n);
    n1 = n % 10;
    n2 = (n / 10) % 10;
    n3 = (n / 100) % 10;
    n4 = (n / 1000) % 10;
    n5 = (n / 10000) % 10;
    y = (n1 * 10000) + (n2 * 1000) + (n3 * 100) + (n4 * 10) + n5;
    printf("the reverse number = %d", y);
    if (n == y)
        printf("\nthe number and reverse number are equal");
    else
        printf("\nthe number and reverse number are not same");
}
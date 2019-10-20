#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, num;
    // unsigned long long int fact = 1; creating unknown error
    unsigned long fact = 1;

    printf("\nEnter a number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("%d is the factorial of %d", fact, num);
}
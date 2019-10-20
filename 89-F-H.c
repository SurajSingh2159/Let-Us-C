#include <stdio.h>
#include <conio.h>
void main()
{
    float n;
    printf("\nEnter the time taken by worker");
    scanf("%f", &n);
    if (n >= 2 && n <= 3)
        printf("\nWorkers are highly efficient\n");
    else if (n > 3 && n <= 4)
        printf("\nworker is orderedto improve speed\n");
    else if (n > 4 && n <= 5)
        printf("\nworker is given training to improve his speed\n");
    else
        printf("\nworker has to leave the company\n");
}

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k,size;
    int space, star; 
    printf("Enter the size of the traingle\n");
    scanf("%d",&size);
    printf("the triangle of star is below");
    //scanf("%d%d%c%c", &i, &j, &space, &star);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        space = size-1 - i;
        star = 2 * i + 1;
        for (j = 0; j < space; j++)
        {
            
            printf(" ");
        }
        for (k = 0; k < star; k++)
        {
            
            printf("*");
        }
        printf("\n");
    }
    getch();
}
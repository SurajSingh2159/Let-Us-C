#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0, hr, bonus;
    while (i++ <= 10)
    {
        printf("\nEnter the working hour of the employee");
        scanf("%d", &hr);

        if (hr > 40)
        {
            bonus = (hr - 40) * 12;
            printf("\nthe bonus of the employee = Rs.%d\n", bonus);
        }
        else
            printf("\nThis employ has not done overtime.\n");
    }
}
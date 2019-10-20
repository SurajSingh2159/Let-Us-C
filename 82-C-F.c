#include <stdio.h>
#include <conio.h>
void main()
{
    int r, s, a;
    printf("Enter age of ram shyam and ajay");
    scanf("%d%d%d", &r, &s, &a);
    if (r < s && r < a)
        printf("Ram is youngest");
    else if (s < r && s < a)
        printf("Shyam is youngest");
    else
        printf("Ajay is youngest");
}
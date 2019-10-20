#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("\nEnter a character from the keyboard");
    scanf("%c", &ch);
    if ((ch >= 65 && ch <= 90))
        printf("\nthe character is an uppercase letter\n");
    if ((ch >= 97 && ch <= 122))
        printf("\nthe character is an lowercase letter\n");
    if ((ch >= 48 && ch <= 57))
        printf("\nthe character is a digit\n");
    if ((ch >= 0 && ch < 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
        printf("\nthe character is an special symbol\n");
}
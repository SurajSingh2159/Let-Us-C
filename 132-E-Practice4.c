#include<stdio.h>
#include<conio.h>
void main()
{
    int r,vr,i,j,n;
    int star,space;
    printf("Enter the size");
    scanf("%d",&n);
    printf("\n");
 for (r = 1; r <= n; r++) {
     if (r > n / 2) {
         vr = n + 1 - r;
     }
     star = (n / 2 - vr + 1);
     for (i = 1; i <= star; i++) {
         printf("*");
     }
     space = n - 2 * star;
     for (i = 1; i <= space; i++) {
         printf(" ");
     }
     printf("\n");
 }
 getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,n,m;
    printf("Enter the size");
    scanf("%d%d",&n,&m);
    printf("\n");
for (r = 1; r <= n; r++) {
     for (c = 1; c <= n; c++) {
         if ((r == 1 || r == m || r == 2 || r == m-1 || c == 1 || c == 2 || c == m-1 || c == m) ||
             ((r == m-7 || r == m-2) && (c == 3 || c == 4 || c == 7 || c == 8)) || ((r == 4 || r == 7) && (c == 3 || c == 8)) || ((r == 4 || r == 7) && (c == 3 || c == 8)) || ((r == 5 || r == 6) && (c == 5 || c == 6))) {
             printf("*");
         } else {
             printf(" ");
         }

     }
     printf("\n");
    
 }
 getch();
}
 
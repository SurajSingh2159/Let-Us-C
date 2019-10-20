#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m;
    printf("Enter the size");
    scanf("%d%d",&n,&m);
    printf("\n");
for (i = 1; i <= n; i++) {
   // printf("%d", i);
     for (j = 1; j <= n; j++) {
        // printf("%d", j);
         if (i == 1 || i == m || j == 1 || j == m) {
             printf("*");
         } else {
             printf(" ");
         }
         
     }
     printf("\n");
     
 }
 getch();
}
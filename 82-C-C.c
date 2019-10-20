#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter any year");
scanf("%d",&n);
if(n%4==0)
printf("the year is leap year");
else
printf("the year is not a leap year");
}
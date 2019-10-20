#include<stdio.h>
#include<conio.h>
void main()
{
float angle1,angle2,angle3;
printf("Enter the three angles of a traingle");
scanf("%f%f%f",&angle1,&angle2,&angle3);
if((angle1+angle2+angle3)==180)
printf("the traingle is a valid traingle");
else
printf("the traingle is a invalid triangle");
}
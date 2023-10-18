#include<stdio.h>
#include<conio.h>
int main()
{
int s1,s2,area;
printf("enter two sides:");
scanf("%d%d",&s1,&s2);
if(s1!=s2)
{
printf("It is a rectangle");
area=s1*s2;
}
else
{
printf("It is a square");
area=s1*s1;
}
printf("%d is a area",area);
}

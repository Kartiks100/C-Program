#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,n1=0,n2=1,n3,fibbo;
clrscr();
printf("Enter a number");
scanf("%d",&n);
//printf("%d%d",n1,n2);
{
for(i=3;i<=n;i++)
{
n3=n1+n2;
printf("%d\t",n3);
n1=n2;
n2=n3;
}}
getch();
return 0;
}
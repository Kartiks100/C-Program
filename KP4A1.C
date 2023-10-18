#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
for(c=a;c<=b;c++)
{
if(c%3==0 && c%7!=0)
printf("%d \t",c);
}
getch();
return 0;
}
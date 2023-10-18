#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a<=c)
printf("%d is between %d and %d",a,b,c);
else
printf("%d is n not between %d and %d",a,b,c);
getch();
return 0;
}

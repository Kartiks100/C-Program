#include<stdio.h>
int main()
{
float f,c;
clrscr();
printf("enter temperature");
scanf("%f" ,&f);
c=(f-32)*5/9;
printf("%.2f = %.2f", f,c);
getch();
return 0;
}
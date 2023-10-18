#include<stdio.h>
#include<conio.h>
int main()
{
double sallery, gs,basic,da,hra;
clrscr();
printf("enter a sallery of employ:");
scanf("%lf",&sallery);
printf("%lf :\n",sallery);
if(sallery>=50000)
{
da=(sallery*25)/100;
hra=(da*20)/100;
gs=sallery+da+hra;
//printf("%lf is gross sallery of employ",sallery);
}
else
{
da=(sallery*10)/100;
hra=(da*15)/100;
gs=sallery+da+hra;
//printf("%d is gross sallery of employ",gs);
}
printf("%lf is gross sallery of employ",gs);
getch();
return 0;
}
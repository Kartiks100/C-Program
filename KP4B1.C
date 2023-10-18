#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
clrscr();
printf("Enter an integer:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
printf("\n divisor is : %d",i);
}
getch();
return 0;
}
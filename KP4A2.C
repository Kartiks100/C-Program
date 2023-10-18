#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,sum;
float avg;
clrscr();
printf("Enter a number");
scanf("%d",&n);
sum=0;
for(a=1;a<=n;a++)
{
sum=sum + a;
}
avg=sum/n;
printf("\n sum is %d",sum);
printf("\n average is %.2f",avg);
getch();
return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,num;
int odd=0,even=0;
clrscr();
printf("Enter a number");
scanf("%d",&n);
for(a=0;a<=n;a++)
//scanf("%d",&num);
if(n%2==0)
{
even++;
}
else
//scanf("%d",&num);
{
odd++;
}
printf("\n %d is even",even);
printf("\n %d is odd",odd);
getch();
return 0;
}

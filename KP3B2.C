#include<stdio.h>
#include<conio.h>
int main()
{
int fact=1;
int n,a,b;
clrscr();
printf("\n Enter a number");
scanf("%d",&n);
printf("\n which Operation do you want to perform");
printf("\n 1 is factorial number \n 2 is check even or odd \n 3 check perfect or not \n\n");
scanf("%d",&b);
 switch(b)
{
case 1:
if(n<=0)
printf("\n Ember is incorrect");
else
for(a=1;a<=n;a++)
fact=fact*a;
printf("\n factorial of %d is %d",n,fact);
break;
case 2:
if(n%2==0)
printf("\n number is even");
else
printf("\n number is odd");
break;
case 3:
if(n>0)
printf("\n number is perfect");
else
printf("\n number is not perfect");
break;
}
getch();
return 0;
}
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b;
char c;
clrscr();
//printf("enter two integers:");
//scanf("%d%d",&a,&b);
printf("\n a is addition \n b is substraction \n c is multiplication \n d is a division");
printf("\n which operation do you want to perform:");
scanf("%c",&c);
printf("enter two integers:");
scanf("%d%d",&a,&b);
switch(c)
{
case'a':
//result=a+b;
printf("sum of %d and %d is %d",a,b,(a+b));
break;
case 'b':
//result=a-b;
printf("sub of %d and %d is %d",a,b,(a-b));
break;
case 'c':
//result=a*b;
printf("multiplication of %d and %d is %d",a,b,(a*b));
break;
case 'd':
//result=a/b;
printf("division of %d and %d is %d",a,b,(a/b));
break;
default:
printf("you are choose wrong");
}
//printf("result is %d");
getch();
return 0;
}
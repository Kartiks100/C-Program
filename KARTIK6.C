#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,sum,sub,div;
printf("enter number:a:");
scanf("%d",&a);
printf("enter number:b:");
scanf("%d",&b);
printf("enter number:c:");
scanf("%d",&c);
printf("enter number:d:");
scanf("%d",&d);
sum=a+b;
sub=c-d;
div=sum/sub;
printf("sum of a and b is: %d",sum);
printf("sub of d from c is: %d",sub);
printf("division of sum a & b by result of sub is: %d",div);
getch();
return 0;
}
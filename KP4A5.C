#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,oddsum=0,evensum=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&i);
if(i%2==0)
{
evensum+=i;
}
else
{
oddsum+=i;
}
}
printf("Sum of all even number is : %d",evensum);
printf("Sum of all odd number is : %d",oddsum);
getch();
return 0;
}


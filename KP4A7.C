#include<stdio.h>
#include<conio.h>
int main()
{
int n,num=0;
printf("Enter an integer :");
scanf("%d",&n);
while(n!=0)
{
   n/=10;
   num++;
   }
  printf("%d",num);
  getch();
  return 0;
  }
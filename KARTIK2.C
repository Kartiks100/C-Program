#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int number;
float square,cube,square_root;
printf("enter a number :");
scanf("%d",&number);
square=number*number;
cube=number*number*number;
square_root=sqrt(number);
printf("\n square of number : %f",square);
printf("\n cube of number : %f",cube);
printf("\n square_root of number : %f",square_root);
getch();
return 0;
}

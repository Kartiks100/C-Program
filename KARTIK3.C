#include<stdio.h>
#include<conio.h>
int main()
{
char c;
clrscr();
printf("\n enter a character :");
scanf("%c",&c);

printf("\n privios character %c :",c-1);
printf("\n next character %c :",c+1);
getch();
return 0;
}

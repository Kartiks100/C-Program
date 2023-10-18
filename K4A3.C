#include<stdio.h>
#include<conio.h>
int main()
{
int arr[100];
int even=0,odd=0;
int n,i;
clrscr();
printf("Enter size of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter numbers",i);
scanf("%d",arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("\n total odd number: %d",odd);
printf("\n total even number: %d",even);
getch();
return 0;
}
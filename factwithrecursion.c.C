#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
int num;
int f;
clrscr();
printf("enter the number : ");
scanf("%d",&num);
f = fact(num);
printf("the factorial of %d is %d",num,f);
getch();
}
int fact(int n)
{
 if(n==0)
       return 1;
 else
       return(n*fact(n-1));
}

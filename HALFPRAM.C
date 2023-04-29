#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,rows;
printf("enter the no of rows : ");
scanf("%d",&rows);
printf("\n");
for(i=1;i<=rows;++i)
{
for(j=1;j<=i;++j)
{
printf("*");
}
printf("\n");
}
getch();
}
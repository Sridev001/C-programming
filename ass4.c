#include<stdio.h>
void main()
{
int x=5;
int *p=&x;
printf("%d",++(*p));
}

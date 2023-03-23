#include<stdio.h>
#include<conio.h>
float avg(float,float,float);
void main()
{
 float p=1,q=2,r=-2,a;
 a=avg(p,(q=4,r=-12,q),r);
 printf("%f",a);
}
float avg(float x,float y,float z)
{
 return (x+y+z)/3;
}

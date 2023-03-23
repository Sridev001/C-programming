#include<stdio.h>
int main ()
{
int person,a;
printf("Age of the person = ");
scanf("%d",&person);
if(person>18)
{printf("eligible for vote");
}
else
{printf("Not eligible for vote\n");
a=18-person;
printf("need %d more age to vote",a);
}
return 0;
}
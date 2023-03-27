// Program to Find LCM of Two Numbers in C Using While Loop

#include <stdio.h>
int main()
{
    int a, b, i=1 , gcd,lcm;
    printf("Enter first integer  : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);
    while (i <= a && i <= b)
        {if(a%i==0 && b%i==0)
            gcd = i;
            ++i;}
    lcm = (a*b)/gcd;
    printf("\nLCM of %d and %d is %d", a, b, lcm);
    return 0;
}
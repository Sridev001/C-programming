/*Write a C program to find sum of all odd numbers from 1 to n using for loop. How to find sum of
all odd numbers in a given range in C programming. Logic to find sum of odd numbers in a given 
range using loop in C programming.*/

#include <stdio.h>
int main() 
{   int i,n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i=1;i<=n;i+=2) 
        {sum += i;}
    printf("The sum of all odd numbers from 1 to %d is %d\n", n, sum);
    return 0;
}

/*Write a C program to input three numbers from user and find maximum between three numbers using 
conditional/ternary operator ?:. How to find maximum between three numbers using conditional 
operator.*/

#include <stdio.h>
int main() 
{
    int n1, n2, n3, a;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number : ");
    scanf("%d", &n3);
    a = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);   //conditional operator
    printf("Maximum number is: %d\n", a);
    return 0;
}

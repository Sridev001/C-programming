// C Program to Display Prime Numbers Between Intervals Using Using Function

#include <stdio.h>
  
int isPrime(int number)
    {int i;
    for (i = 2; i <= number / 2; i++)
        {if (number % i == 0)
            {return 0;}}
    return 1;}
int main()
    {int n1, n2;
    printf("enter starting number : ");
    scanf("%d",&n1);
    printf("enter ending number : ");
    scanf("%d",&n2);
    printf("The prime numbers between %d to %d are: ", n1, n2);
    while (n1 <= n2) 
        {if (isPrime(n1)) 
            {printf("%d, ", n1);}
        n1++;}
    return 0;}
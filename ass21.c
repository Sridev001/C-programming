// Program For Converting Temperature Celsius Into Fahrenheit

#include<stdio.h>  
int main()   
    {float fahrenheit, celsius;  
    printf("enter temperature in celsius : ");
    scanf("%f",&celsius) ; 
    fahrenheit =( (celsius*9)/5)+32;  
    printf("\n\n Temperature in fahrenheit is:  %.3f",fahrenheit);  
    return 0;  
    }  
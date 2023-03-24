/*Write a C program to input a character and check whether the character is alphabet or not using 
Conditional/Ternary operator ?:. How to check alphabets using conditional operator in C programming.*/

#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    (ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')? printf("%c is an alphabet.",ch):printf("%c is not an alphabet.",ch);
    return 0;
}

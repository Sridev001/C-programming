/*Write a C program to find maximum occurring character in a string using loop. How to find highest
    frequency character in a string using loop in C programming. Program to find the highest occurring 
    character in a string in C. Logic to find maximum occurring character in a string in C programming.*/

#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char string[100];
    printf("enter string : ");
    fgets(string,100,stdin);
    int i, j, min, max, length = strlen(string);  
    char maxChar = string[0];  
    int freq[length];  
    //Count each word in given string and store in array freq  
    for(i = 0; i < length; i++) 
        {freq[i] = 1;  
        for(j = i+1; j < length; j++) 
            {if(string[i] == string[j] && string[i] != ' ' && string[i] != '0')
                {freq[i]++;  
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';}}}
    max = freq[0];  
    for(i = 0; i < length; i++) 
        {if(max < freq[i]) 
            {max = freq[i];  
            maxChar = string[i];}}
    printf("Maximum occurring character: %c", maxChar);  
    return 0;  
}  

//VERIFY the  vowels and consonant
#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    int rahul,kumar;
    printf("enter the letter : ");
    scanf(" %c",&c);
    rahul = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   kumar = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(rahul||kumar)
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a consonant",c);
    }
    return 0;
}
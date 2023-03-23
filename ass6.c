#include<stdio.h>
void display(char *);
main()
{
char string[]="Hello World";
display(string);
}
void display(char *string)
{
printf("%s",string);
}

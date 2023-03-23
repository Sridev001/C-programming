//STRING LENGTH
#include<stdio.h>
#include<string.h>
int main ()
{
    int i;
    char a[20];
    fgets(a,sizeof(a),stdin);
    printf("your name is ");
    puts(a);
    i = strlen(a);
    printf("The length of the character %d",i);
    return 0;
}
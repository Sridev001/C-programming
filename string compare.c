//STRING COMPARE
//i dont no it is corrrect
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int c;
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    c = strcmp(a,b);
    printf("%d",c);
    return 0;
}
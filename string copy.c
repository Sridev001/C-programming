//STRING COPY
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    fgets(a,sizeof(a),stdin);
    strcpy(b,a);
    printf("the name of a : ");
    puts(a);
    printf("the copied name of b : ");
    puts(b);
    return 0;
    }

//STRING COMBINE
#include<stdio.h>
#include<string.h>
int main()
{
   char a[50],b[50];
   fgets(a,sizeof(a),stdin);
   fgets(b,sizeof(b),stdin);
   strcat(a,b);
   puts(a);
}
// find the frequency of the character
#include<stdio.h>
#include<string.h>
int main ()
{
    char name[50],search;
    int i=0,count;
    scanf("%s",name);
    scanf("%c",search);
    for(i=0;name[i]!= NULL ;i++)
    {
        if(search==name[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

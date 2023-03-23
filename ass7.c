#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows,k;
    printf("enter a number for rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=i;j<rows;j++)
        {printf("  ");}
        for(k=1;k<=i;k++)
        {printf(" %d",k);}
        printf("\n");
    }
}

// Each line contains n characters = space+number
// When n=5
//          1        
//       12
//     123
//   1234
// 12345

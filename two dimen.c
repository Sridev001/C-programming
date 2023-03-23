//i donnt no it is correct
#include<stdio.h>
int main()
{
    int sum[2][2],a[2][2].b[2][2],ij;
    printf("enter a matrix element");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {scanf("%d",&a[i][j]);}
    }
     for(i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {scanf("%d",b[i][j]);}
    }
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {scanf("%d",sum[i][j]);}
    }
   for(i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {sum[i][j]=a[i][j] + b[i][j];}
    }
     for(i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {printf("%d",sum[i][j]);}
    }
    }

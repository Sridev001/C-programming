/* C program to find all prime numbers from the inputted array */
#include<stdio.h>
#include<conio.h>
void main()
{
     int ar[100],i,n,j,counter;
      
     printf("\nEnter the size of the array : ");
     scanf("%d",&n);
     printf("\n Now enter the elements of the array");
     for(i=0;i<n;i++)
     {
           scanf("\n%d",&ar[i]);
     }
      
     printf(" Array is ");
     for(i=0;i<n;i++)
     {
           printf("\t %d",ar[i]);
     }
      
     printf("\n \nAll the prime numbers in the array are -");
     for(i=0;i<n;i++)
     {
           counter=0;
           for(j=2;j<ar[i];j++)
           {
                 if(ar[i]%j==0)
                 {
                       counter=1;
                       break;
                 }
           }
           if(counter==0)
           {
                 printf("\t %d",ar[i]);
           }
     }
     getch();
}
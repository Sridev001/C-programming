//  What will be the output of the program if the array begins 1200 in memory?
            
            #include<stdio.h>
            int main()
            {   
                int arr[]={2, 3, 4, 1, 6};  
                printf("%u, %u, %un", arr, &arr[0], &arr);  
                return 0;
            }
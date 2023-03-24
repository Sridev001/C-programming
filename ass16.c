// Find Error/Output in follwing code:

            // main() 
            // {
            //     int a = 10;      
            //     if ((fork ( ) == 0))      
            //     a++;      
            //     printf ("%dn", a ); 
            // }


    // the modified code
            #include <stdio.h>  // for printf function
            #include <unistd.h> // for fork function

            int main() {
                int a = 10;
                if (fork() == 0) {
                    a++;
                }
                printf("%d\n", a);
                return 0;
            }

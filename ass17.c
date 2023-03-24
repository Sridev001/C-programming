// What is the code in a while loop that returns the output of the given code?

//             #include <stdio.h>
//             int main () 
//             {
//                 int a;
//                 /* for loop execution */
//                 for( a = 1; a <= 100; a++ )
//                     {printf("%d\n",a * a);}
//                 return 0;
//             }

                #include <stdio.h>
                int main() 
                {
                    int a = 1;
                    while (a <= 100) 
                        {printf("%d\n", a * a);
                        a++;}
                    return 0;
                }
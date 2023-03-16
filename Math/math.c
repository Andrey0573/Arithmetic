#include <stdio.h>      // printf(), scanf()
#include <stdlib.h>     // rand(), srand()
#include <time.h>       // time()

int main () {
	
system("clear");
time_t t;
                   /* Intializes random number generator */
                   srand((unsigned) time(&t));
				   
while (1) {

int a, b, c, d;
                   
a = rand() % 11;
b = rand() % 11;
//                 printf("\n a = %d    b = %d    c = ?\n", a, b);
                   
   if (  a >= b )
        {         
//      printf("\n a - b = c \n");
        printf("\n %d - %d = ?\n\n", a, b);
        scanf("%2d", &d);
           if ( d==a-b )
            {
            system("clear");
            printf("\n OK! \n\n\n");
            }
           else
              {
              system("clear");
              printf("\n ERROR! \n\n\n");
              }
        }

   else 
        {
//      printf("\n b - a = c \n");
        printf("\n %d - %d = ? \n\n", b, a);
        scanf("%2d", &d);
           if ( d==b-a )
            {
            system("clear");
            printf("\n OK! \n\n\n");
            }
           else
              {
              system("clear");
              printf("\n ERROR! \n\n\n");
              }

        }
   }              
return(0);
}
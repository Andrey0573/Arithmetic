#include <stdio.h>	// printf(), scanf()
#include <stdlib.h>	// rand(), srand()
#include <time.h>	// time()

int main () {
system("clear");
time_t t;	
		   /* Intializes random number generator */
		   srand((unsigned) time(&t));
while (1) {

int a, b, c, d;
		   
a = rand() % 11;
b = rand() % 11;
//		   printf("\n a = %d    b = %d    c = ?\n", a, b);
		   
   if (  a >= b )
	{	  
//	printf("\n a - b = c \n");
	printf("\n \033[0;1m %d - %d = ? \033[0m \n\n", a, b);
	scanf("%2d", &d);
	   if ( d==a-b )
	    {
	    system("clear");
//	    printf("\n OK! \n\n\n");
	    printf("\n \033[32;1m OK !!! \033[0m \n\n\n");
	    }
	   else
	      {
	      system("clear");
//	      printf("\n ERROR! \n\n\n",   );
	      printf("\n \033[31;1m ERROR !!! :\(  \033[0m \n\n\n");
	      }
	}

   else 
	{
//	printf("\n b - a = c \n");
 	printf("\n \033[0;1m %d - %d = ? \033[0m \n\n", b, a);
	scanf("%2d", &d);
	   if ( d==b-a )
	    {	
	    system("clear");
	    printf("\n \033[32;1m OK !!! \033[0m \n\n\n");
	    }
	   else
	      {
	      system("clear");
	      printf("\n \033[31;1m ERROR !!! :\(  \033[0m \n\n\n");
	      }

        }	
   }		  
return(0);
}

/*
 * from https://www.tutorialspoint.com/c_standard_library/c_function_rand.htm
 
*/
/*
#include <stdio.h>
  #include <stdlib.h>
 
  int main () {
     int i, n;
        time_t t;
           
              n = 5;
                 
 */
                    /* Intializes random number generator */
/*
srand((unsigned) time(&t));
*/
      /* Print 5 random numbers from 0 to 49 */
/*      for( i = 0 ; i < n ; i++ ) {
	            printf("%d\n", rand() % 50);
		       }
   
   return(0);
   }

*/

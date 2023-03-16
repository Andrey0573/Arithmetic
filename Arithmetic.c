#include <stdio.h>	// printf(), scanf()
#include <stdlib.h>	// rand(), srand()
#include <time.h>	// time()

/*
function_1 Addition 
function_2 Subtraction
function_3 Multiplication
function_4 Division
function_5 >
function_6 <
*/

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int Subtraction(int, int);

int main()
{
    system("clear");
    time_t t;	
	/* Intializes random number generator */
	srand((unsigned) time(&t));
    while (1) 
    {
        int a, b, c, num1, num2, maxnum = 16;
		   
        num1 = rand() % maxnum;
        num2 = rand() % maxnum;

        a = max(num1,num2);
        b = min(num1,num2);
        c = Subtraction(a, b);
        system("clear");
        if ( c == 1 )
	    {
            printf("\n \033[32;1m OK !!! \033[0m \n\n\n");
        }
	    else
	    {
            printf("\n \033[31;1m ERROR !!! :\(  \033[0m \n\n\n");
        }
    }
    return(0);
}

int Subtraction(int a, int b) 
{   
    int result;
    printf("\n \033[0;1m %d - %d = ? \033[0m \n\n", a, b);
    scanf("%2d", &result0);
    if ( result == a - b )
    {
        return(1);
    }
    else
    {
        return(2);
    }
    
}

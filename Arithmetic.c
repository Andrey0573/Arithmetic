#include <stdio.h>	/*  // printf(), scanf()  */
#include <stdlib.h>	/*  // rand(), srand()    */
#include <time.h>	/*  // time()             */

/*
function_1 Addition 
function_2 Subtraction
function_3 Multiplication
function_4 Division
function_5 > More than
function_6 < Less than
*/

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int a, b, c, num1, num2, operation, result, maxnum = 11;
__uint8_t count_true = 0, count_false = 0, count_total = 0;
time_t t;

int Addition(int, int);
int Subtraction(int, int);
int counters();

int main()
{
    system("clear");
/* //    time_t t;	*/
	/* Intializes random number generator */
	srand((unsigned) time(&t));
    counters();    
    while (1) 
    {
        num1 = rand() % maxnum;
        num2 = rand() % maxnum;
        operation = (rand() % 2) + 1;
        if ( operation == 1)
        {
            result = Addition(num1, num2);
        }
        else
        {
            result = Subtraction(num1, num2);
        }
       system("clear");
        if ( result == 1 )
	    {
            count_true ++ ;
            counters();
            printf("\n \033[32;1m :)   OK !!! \033[0m \n\n\n");
        }
	    else
	    {
            count_false ++ ;
            counters();
            printf("\n \033[31;1m :(   ERROR !!! \033[0m \n\n\n");
        }
    }
    
    return(0);
}

int Addition(int a, int b)
{   
    printf("\n \033[0;1m %d + %d = ? \033[0m \n\n", a, b);
    scanf("%2d", &c);
    if ( c == a + b )
    {
        return(1);
    }

    return(0);    
}

int Subtraction(int num1, int num2) 
{   
    a = max(num1,num2);
    b = min(num1,num2);
    printf("\n \033[0;1m %d - %d = ? \033[0m \n\n", a, b);
    scanf("%2d", &c);
    if ( c == a - b )
    {
        return(1);
    }

    return(0);    
}

int counters() 
{
    if ( count_true + count_false == 100)
    {
        // count_true = 0; 
        // count_false = 0;
        printf("\033[\n\n\n 0;1m Total: %d   \033[32;1m True: %d   \033[31;1m False: %d \033[0m \n", count_true + count_false, count_true, count_false);   
        printf("\033[0;1m \n\n Restart \033[0m \n");
        //return(0);
        sleep(30);
        exit(0);
    }
    printf("\033[0;1m Total: %d   \033[32;1m True: %d   \033[31;1m False: %d \033[0m \n", count_true + count_false, count_true, count_false);   
    return(0);    
}

#include <stdio.h>	/*   printf(), scanf()  */
#include <stdlib.h>	/*   rand(), srand()    */
#include <time.h>	/*   time()             */

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

unsigned char trash;
int a;
int b;
int c;
int x;  
int num1; 
int num2;
int operation; 
int result; 
int maxnum = 51;
__uint8_t count_true = 0; 
__uint8_t count_false = 0; 
__uint8_t count_total = 0;
time_t t;
time_t unix_time;
char date_time[20];

int Addition(int, int);
int Subtraction(int, int);
int counters();
void write_log();

int main()
{
    system("clear");
/*  temporary comment    time_t t;	*/
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
 
/*  temporary comment  return(0);  */
}

int Addition(int a, int b)
{   
    printf("\n \033[0;1m %d + %d = ? \033[0m \n\n", a, b);
    scanf("%2d", &x);
/*  temporary comment  if (x > 102 || x < 0) { x = 102; } */
    c = x;
    printf("\n x= %d ------------ c = %d  \n\n", x, c); 
/*  temporary comment  printf("\n c = %d  \n\n", c);  */
    scanf("%c", &trash);
    printf("\n trash = %c  \n\n", trash);
    sleep(3); 
    if ( c == a + b )
    { 
        return 1;
    }

    return 0;    
}

int Subtraction(int num1, int num2) 
{   
    a = max(num1,num2);
    b = min(num1,num2);
    printf("\n \033[0;1m %d - %d = ? \033[0m \n\n", a, b);
    scanf("%2d", &c);
    if ( c == a - b )
    {
        return 1;
    }

    return 0;    
}

int counters() 
{
    write_log();
    if ( count_true + count_false == 100)
    {
        /* count_true = 0; 
         count_false = 0;  */
        printf("\n\n\n \033[0;1m Total: %d   \033[32;1m True: %d   \033[31;1m False: %d \033[0m \n", count_true + count_false, count_true, count_false);   
        printf("\033[0;1m \n\n Restart \033[0m \n");
        /* temporary comment return(0);  */
        sleep(30);
        exit(0);
    }
    printf("\n\n \033[0;1m Total: %d   \033[32;1m True: %d   \033[31;1m False: %d \033[0m \n", count_true + count_false, count_true, count_false);   
    return 0;    
}

void write_log() 
{
	time (&unix_time);
	strftime(date_time, 20, "%Y-%m-%d %H:%M:%S", localtime(&unix_time));  

    FILE * fp;
    fp = fopen ("arithmetic.log", "a");
    fprintf(fp, "%s   Total: %d   True: %d   False: %d \n", date_time, count_true + count_false, count_true, count_false);
    fclose(fp);
}


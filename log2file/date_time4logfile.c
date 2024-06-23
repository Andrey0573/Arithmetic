#include <stdio.h>      /*  // printf(), scanf()  */
#include <time.h>       /*  // time()             */

time_t unix_time;
char date_time[20];

void date_time4log()	{
//	time_t unix_time;
//    	char* time_string;
	/* Obtain current time. */
//	unix_time = time(NULL);
	time (&unix_time);
	strftime(date_time, 20, "%Y-%m-%d %H:%M:%S", localtime(&unix_time));  

}

int main () {

date_time4log();

   FILE * fp;
   fp = fopen ("logfile.log", "a");
   fprintf(fp, "%s loginfo  \n", date_time);
   fclose(fp);
 
//   printf(" %s The current date is\n", date_time);
 
   return(0);

}

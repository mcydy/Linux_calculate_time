/*
 * =====================================================================================
 *
 *       Filename:  calculate_time.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/02/11 01:59:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tom Xue (), tom.xue@nokia.com
 *        Company:  Nokia
 *
 * =====================================================================================
 */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(int argc, char *argv[])
{
	printf("Hello, world!\n");
	struct timeval tvafter,tvpre;
	struct timezone tz;
	int sum = 0;      
	int i=0;

	gettimeofday (&tvpre , &tz);

	for(i = 0; i < 100000000; i++)
	{
     		sum += i;
	}      
	gettimeofday (&tvafter , &tz);
	printf("sum=%d time spent: %ldms\n",sum, (tvafter.tv_sec-tvpre.tv_sec)*1000+(tvafter.tv_usec-tvpre.tv_usec)/1000);
	return EXIT_SUCCESS;
}

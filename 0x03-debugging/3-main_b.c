#include <stdio.h>
#include "main.h"

/**
 *  * main - tests the function that converts a date to the day of the year
 *   * and determines how many days are left in the year, accounting for leap years
 *    * Return: 0
 *     */
int main(void)
{
	    int month = 2;
	        int day = 29;
		    int year = 2000;

		        printf("Date: %02d/%02d/%04d\n", month, day, year);

			    day = convert_day(month, day);

			        print_remaining_days(month, day, year);

				    return (0);
}


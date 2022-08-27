#include <stdio.h>

/**
 * A program to print the month of the year
 * &year = For entering the calendar year
 * months: for getting months of the year
 *
 */
 
int main() 
{
	int year, month;

	//Step: Accept users input
	printf("\nPlease, enter the year for the calenday\n");
	scanf("\n%d", &year);

	//Step 2: Create a character- array pointer to store all the months in a year
	char *months[] = {"Jan","Feb","Mar","Apr","May","june","Jul","Aug","Sept","Oct","Nov","Dec"};

	//Step 3: Display all the months in one column by passing an increament to the variable pointer array
	for(month=0; month<12; month++)
	{
		printf("\n--------------------%s--------------------\n", months[month]);
		printf("---Sun. Mon. Tue. Wed. Thurs. Fri. Sat---\n\n");
	}
}


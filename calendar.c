#include <stdio.h>

/**
 * A program to print the month of the year
 * &year = For entering the calendar year
 * months: for getting months of the year
 *
 */
 
int main() 
{
	int year, month, days_Of_Months, day, weekday;

	//Step: Accept users input
	printf("\nPlease, enter the year for the calenday\n");
	scanf("\n%d", &year);

	//Step 2: Create a character- array pointer to store all the months in a year
	char *months[] = {"Jan","Feb","Mar","Apr","May","june","Jul","Aug","Sept","Oct","Nov","Dec"};

	//Step 4: Create an unsized integer array for days in all months
	int days_In_all_Months[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	//Step 3: Display all the months in one column by passing an increament to the variable pointer array
	for(month=0; month<12; month++)
	{
		printf("\n--------------------%s--------------------\n", months[month]);
		printf("---Sun. Mon. Tue. Wed. Thurs. Fri. Sat---\n\n");

		//Step 5: Get all the days in the months and store in one place
		days_Of_Months = days_In_all_Months[month];

		//Steps 6: Display Days in all months via a loop
		for (day=1; day<=days_Of_Months; day++)
		{
			printf("%5d", day);

			//Using the Logi below to align the days
			if(++weekday>6)
			{
				printf("\n");
				weekday = 0;
			}
		}
	}
}


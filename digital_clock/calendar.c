#include <stdio.h>
/**
 * A project to display the months, weeks, days, and dates in a calendar year
 * &months[]: a pointer array for storing months
 * year: a variable for storing the year entered by the user
 * day: use for storing dates
 * daysInMonth: for storing days in months
 */

int main()
{
	
	int year, i, month, day, daysInMonth, weekday = 0;
	
	//Step 1: Request a user to enter his/her preferred year value and store in a memory
	printf("\nKindly enter your desired year:");
	scanf("%d", &year);
	
	//Step 2: Declare a character pointer array and assign all the months in the year
	char *months[] = {"Jan", "Feb", "Mar", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	//step 4: Declare an integer array for storing the total number of days (TotalDaysEachMonth) in each month
	int TotalDaysEachMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	//step 3: Used for statement to print all the months in the year by using a loop to pass the month variable via the character pointer *months[month]
	for(month = 0; month < 12; month++)
	{
	//step 5: Get the total number of days in each month by passing the increment (month) to the array (TotalDaysEachMonth) and storing it in another variable (daysInMonths)
        daysInMonth = TotalDaysEachMonth[month];
		printf("\n\n----------------------------------------%s----------------------------------------\n", months[month]);
		printf("----------------------Sun.  Mon.  Tue.  Wed.  Thurs.  Fri.  Sat.----------------------\n");
		
		//Step 5:
		for(day= 1; day <= daysInMonth; day++);
		{
			printf("The values1.:%3d\n", day);
		}
		for (i = 0; i<31; i++)
		{
			printf("%3d", i);
		}
	
	}

}

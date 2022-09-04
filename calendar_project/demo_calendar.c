#include <stdio.h>

/**
 * A program to print the month of the year
 * &year: For entering the calendar year
 * &months: for getting months of the year
 *
 */
//Steps 7: Using the gregorian Calendar to calculate which week is the first day of the month of January below. So I am suing this algorthm below to achieve 
//that
int get_day_of1st_week(int year){
int day; 
day = (((year-1) * 365) + ((year-1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1)% 7;
return day;
}
int main()
{
	int year, month, day, days_Of_Months, weekdays=0, startingDay;

	//Step 1: Accept users input:
	printf("\n Please, enter the year for your calendar:\n");
	scanf("\n%d", &year);

	//Step 2: Create a character array pointer to store all the months on the year
	char *months[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};

	//Step4: Create an unsized intger array for days in all the months
	int days_InAll_Months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//Consider the leap year which has the month of februrary 29 days as seen below
	if((year%4==0 && year%100!=0) || year%400==0)
	{

		days_InAll_Months[1] = 29;
	}
	//Step 7: Continues...
	startingDay = get_day_of1st_week(year);

	//Step3: Display all the months in one column by passing an increment to the variable pointer array of months
	for(month=0; month<12; month++)
	{

		printf("\n------------------%s--------------------\n", months[month]);
		printf("---Sun  Mon  Tue  Wed  Thur  Fri  Sat---\n");

		//Step 5: Get all the days of the months and store them in another variable as seen below.
		days_Of_Months = days_InAll_Months[month];

		//Final Step: Positioning the dats furhter to align with the week days of the months.
		for (weekdays=0; weekdays<startingDay; weekdays++)
			printf("     ");


		//Step 6: Display days of months via loop below
		for(day = 1; day<=days_Of_Months; day++)
		{
			
			printf("%5d", day);

			//I will use the logic below to align the dates with the week days
			if(++weekdays>6)
			{
				printf("\n");
				weekdays = 0;
			}
			//Step 7 continues...
			startingDay = weekdays;
		}
	}

}

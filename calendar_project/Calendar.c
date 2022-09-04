#include <stdio.h>

/**
 * A program to print the month of the year
 * &year = For entering the calendar year
 * months: for getting months of the year
 *
 */
//Step 7: Using the gregorian calendar to calculate which weekday is the first day of the month of January
int get_Day1_Of_1st_Week(int year){
        int day;
        day = (((year - 1) * 365) + ((year-1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
        return day;
}
int main()
{
        int year, month, days_Of_Months, day, weekday = 0, startingDay;

        //Step: Accept users input
        printf("\nPlease, enter the year for the calenday\n");
        scanf("\n%d", &year);

        //Step 2: Create a character- array pointer to store all the months in a year
        char *months[] = {"JAN","FEB","MAR","APR","MAY","JUN","Jul","AUG","SEP","OCT","NOV","DEC"};

        //Step 4: Create an unsized integer array for days in all months
        int days_In_all_Months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        //Consider the l eap year which has the month of februrary 29 days below
        if((year%4==0 && year%100!=0) || year%400==0)
        {
                days_In_all_Months[1] = 29;


        }
        //Step 7: Continues...
        startingDay = get_Day1_Of_1st_Week(year);


                //Step 3: Display all the months in one column by passing an increament to the variable pointer array
                for(month=0; month<12; month++)
                {

                        printf("\n------------------%s--------------------\n", months[month]);
                        printf("---Sun  Mon Tue  Wed   Thur Fri  Sat---\n");

                        //Step 5: Get all the days in the months and store in one place
                        days_Of_Months = days_In_all_Months[month];


                        //step 8: To position the dates to align with the week days of the month
                        for(weekday=0;weekday<startingDay; weekday++)
                                printf("     ");

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
                                //step 7:....
                                startingDay = weekday;
                        }
                }
}


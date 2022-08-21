#include <stdio.h>
#include <windows.h>
#include <dos.h>
#include <conio.h>
int main()
{
	int hour, minute, second;
	int delay = 1000; //Use for adding a delay of one thousand millisec

	//Request a user to set the time
	printf("Please, kindly set the time below by entering the values for hour. minutes, and seconds: \n");
	//Collect user inputs
	scanf("%d%d%d", &hour,&minute,&second);
	
	//Set limits
	if(hour > 12 || minute > 60 || second > 60)
	{
		printf("Error: You exceeded the required value for time. Incorrect value");
		exit();
		while(1)
		{
			second++;
			if(second > 59)
			{
				minute++;
				second = 0;
			}
			if(minute > 59)
			{
				hour++;
				minute = 0;
			}
			if(hour > 12)
			{
				hour = 1;
			}
			printf("\n Clock: ");
			printf("\n %02d:%02d:%02d", hour,minute,second);//This writes out the time format in 00:00:00
			sleep(delay);//This function slows down the while loop
			system(cls);
		}
	}

	

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

	

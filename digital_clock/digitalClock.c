#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main()
{
        int hour, minute, second;

        //Request a user to set the time
        printf("Please, kindly set the time below by entering the values for hour. minutes, and seconds: \n");
        //Collect user inputs
        scanf("%d%d%d", &hour,&minute,&second);

        //Set limits
        if(hour > 12 || minute > 60 || second > 60)
        {
                printf("Error: You exceeded the required value for time. Incorrect value");
        }else
        {
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
                        printf("Clock: \n");
                        printf("%02d:%02d:%02d \n", hour,minute,second);//This writes out the time format in 00:00:00
			usleep(1000);
                        system("clear");
                  
                }
        }
}


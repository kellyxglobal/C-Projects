#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char emp_Name[30];
	char emp_Country_Code[4];
	char emp_ID_Card[15];
	long int emp_Mobile_No;
	char emp_gender[8];
	char emp_email[100];
};

//Here we define a data type for emplyee
typedef struct employee employee;


//function declarations
void menu_options();

int main()
{
void	start();
	return 0;
}

//The function that starts our program
void start()
{
	int select;
	while(1)
	{
		menu_options();
		scanf("%d",&select);
	
	}

}

//A function to display the main menu options
void menu_options()
{

	system("clear");
	printf("\t\t*******************************************************************\n");
	printf("\t\t* 		Welcome to the Employees Regidtration Page	      *\n");
	printf("\t\t*******************************************************************\n\n");
	printf("\t\t\t1) List Employees Record\n\n");
	printf("\t\t\t2) Add Employee\n\n");
	printf("\t\t\t3) Search Employees Details\n\n");
	printf("\t\t\t4) Delete Employee from DB file\n\n");
	printf("\t\t\t5) Update Employees Detai\n\nl");
	printf("\t\t\t6) Delete All Employees Contact\n\n");
	printf("\t\t\t7) Exit Employees Reg Page\n\n");

	printf("\t\t\t\tEnter your choice as stated above : ");
}



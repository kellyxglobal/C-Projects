#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char emp_Name[30];
	char emp_Country_Code[4];
	char emp_ID_Card;
	long int emp_Mobile_No;
	char emp_gender[8];
	char emp_email[100];
};

//Here we define a data type for emplyee
typedef struct employee employee;


//function declarations
void wipe_all_employees();
void menu_options();
void add_employee();
void list_details();
void search_employee();
void wipe_employee();
void update_employee();
void accept_input(employee *emp);

int main()
{
	start();
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
		switch(select);
		{
			case 1:
				list_details();
				getchar();
				getchar();
				break;
			case 2:
				add_employee();
				getchar();
				getchar();
				break;
			case 3:
				search_employee();
				getchar();
				getchar();
				break;
			case 4: 
				wipe_employee();
				getchar();
				getchar();
				break;
			case 5: 
				update_employee();
				getchar();
				getchar();
				break;
			case 6: 
				wipe_all_employees();
				getchar();
				getchar();
				break;
			default :
				system("clear");
				printf("Thanks for your corporation : ");
				getchar();
				getchar();
				exit(1);
		}

	
	}

}

//A function to display the main menu options
void menu_options()
{

	system("clear");
	printf("\t\t*******************************************************************");
	printf("\t\t* 		Welcome to the Employees Regidtration Page	      *");
	printf("\t\t*******************************************************************");
	printf("\t\t\t1) List Employees Record\n\n");
	printf("\t\t\t2) Add Employee\n\n");
	printf("\t\t\t3) Search Employees Details\n\n");
	printf("\t\t\t4) Delete Employee from DB file\n\n");
	printf("\t\t\t5) Update Employees Detai\n\nl");
	printf("\t\t\t6) Delete All Employees Contact\n\n");
	printf("\t\t\t7) Exit Employees Reg Page\n\n");

	printf("\t\t\t\tEnter your choice as stated above : ");

}


//This function adds employees information into the employees DB file
void add_employee()
{
	system("clear");
	FILE *fptr;
	if(fptr = (fopen("phone_book", "ab+")) == NULL)
	{
		printf("Error: The file could not open, try again!\n");
		printf("Type any key to proceed...\n");
		return;

	}
	else
	{
		employee emp;
		accept_input(&emp);

		fwrite(&emp, sizeof(emp), 1, fp);t
		fflush(stdin);
		fclose(fptr);
		system("clear");
		printf("Employees data is entered successfully\n");
		printf("Press any key to continue ...\n");
	}

}

//This function accepts employees information from the add_employee() function above
void accept_input(employee *emp)
{
	system("clear");

	printf("Enter name : ");
	scanf("%s",emp->emp_Name);

	printf("Enter Employees country code : ");
	scanf("%s",emp->emp_Country_Code);

	printf("Enter employees ID: ");
	scanf("%s",emp->emp_ID_Card);

	printf("Enter employees Phone No : ");
	scanf("%ld",&emp->emp_Mobile_No);

	printf("Enter employees Gender : ");
	scanf("%s",emp->emp_gender);

	printf("Enter employees email address : ");
	scanf("%s",emp->emp_mail);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char emp_Name[30];
	char emp_Country_Code[4];
	char emp_ID_Card;
	long int emp_Mobile_No;
	char sex[8];
	char mail[100];
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
void take_input(person *p);

int main()
{
	start();
	return 0;
	
	int select;
	while()
	{
		menu_options();
		scanf("%d)",&select);
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
				printf("Thanks for your corporation : );
				getchar();
				getchar();
				exit(1);
		}

	
	}

}

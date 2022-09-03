#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL, MAX_LEN = 80};

void BlockCharReadWrite(FILE *read, FILE *write);

int main()
{

	FILE *fp1, *fp2;
	char fpone[] = "kc.txt";
	char fptwo[] = "haiku.txt";
	int reval = SUCCESS;

	if((fp1 = fopen(fpone, "w")) == NULL)
	{

		printf("Error: The file %s failed to create", fpone);
		reval = FAIL;

	}
	else if((fp2 = fopen(fptwo, "r")) == NULL)
	{
		printf("Error: The file %s could not open", fptwo);
		reval = FAIL;
	}
	else
	{
	
		BlockCharReadWrite(fp2, fp1);
		fclose(fp1);
		fclose(fp2);
	}
	return reval;
}

void BlockCharReadWrite(FILE *read, FILE *write)
{

	int num;
	char Buff[MAX_LEN + 1];

	//while ((num = fread(Buff, sizeof(char), MAX_LEN, read)) != feof)
	while(!feof(read))
	{
		num = fread(Buff, sizeof(char), MAX_LEN, read);

		Buff[num * sizeof(char)] = '\0'; /*Append a nulll character */
		printf("%s", Buff);
		fwrite(Buff, sizeof(char), num, write);
	}
}

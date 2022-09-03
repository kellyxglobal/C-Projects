//Writing a character one line at a time from one file to anothe file
#include <stdio.h>
#include <string.h>

enum {SUCCESS, FAIL};

void linecharReadWrite(FILE *fptrII, FILE *fptrSS);

int main()
{
        FILE *fileII, *fileSS;
        char filenameII[] = "kayc.txt";
        char filenameSS[] = "Kelechi.txt";
        int reval = SUCCESS;

        if((fileII = fopen(filenameII, "w")) == NULL)
        {
                printf("the file %s r-efused to create", filenameII);
                reval = FAIL;
        }
        else if((fileSS = fopen(filenameSS, "r")) == NULL)
        {
                printf("The file %s could not open", filenameSS);
                reval = FAIL;
        }
        else{
                linecharReadWrite(fileSS, fileII);
                fclose(fileII);
                fclose(fileSS);
        }
        return reval;
}

//Function Definition
void linecharReadWrite(FILE *fptrII, FILE *fptrSS)
{
        char Buff[80];

        while (fgets(Buff, 80, fptrII) != NULL)
        {
                fputs(Buff, fptrSS);
                printf("%s", Buff);
        }
}

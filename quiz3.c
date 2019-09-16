/*quiz3*/
#include<stdio.h> /*printf scanf*/
#include<string.h>/*strlen*/
/*functions prototypes*/
int Occurrences(char string[], const char stringref[]);

int main(void)
{
printf("Enter a word>\n");
char stringInput[20];

scanf("%s", stringInput);
Occurrences(stringInput, stringInput);
return 1;
}

int Occurrences(char string[], const char stringref[])
{
/*a is 97*/
int i,j = 0;
int sum = 0;
int flag = 0;
for(i = 0; i < strlen(stringref); i++)
{
char check = stringref[i];
	for(j = 0; j < strlen(stringref); j++)
	{
		if(check == string[j] && check != 1)
		{

			sum++;
			string[j] = 1;
		}
	}
	if(sum > 1)
	{
		printf("Duplicate letter: %c, Occurrences: %d\n", check, sum);
		flag = 1;
	}
	sum = 0;
	
}
if(flag != 1)
	{
		printf("No duplicates found\n");
	}
return 0;
}

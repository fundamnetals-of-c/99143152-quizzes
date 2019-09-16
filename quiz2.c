/*quiz 2*/
#include <stdio.h>

int main(void)
{
    /*setup*/
    int input;
    printf("Enter an integer>\n");
    scanf("%d", &input);
	int i,j,k;
    if(input < 1)
    {
        printf("Input must be greater or equal to 1\n");
        return 1;
    }
    for(i = 1; i <= input; i++)
    {
        printf(" ");
        for(j = 0; j < input - i; j++)
        {
            printf(" ");
        }
        for(k = 0; k < i; k++)
        {
        printf("*");
        }
        for(k = 0; k < i - 1; k++)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}

//----------------------------- MULTIPLICATION TABLE -------------------------------------//
#include<stdio.h>

int main()
{
	int user_input, i, result;

    printf("Enter number to print table: ");
    scanf("%d", &user_input);

    printf("\nSing it loudly in a rythm.....\n\n");
	for(i=1; i<=10; i++)
    {
    	result = user_input*i;
        printf("%d %d's are %d\n",user_input, i, result);
    }

    return 0;
}

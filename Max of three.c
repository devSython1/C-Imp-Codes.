//------------------------------MAX OF 3 NUMBERS-------------------------------------//

#include<stdio.h>

int main()
{
	float input_1, input_2, input_3;
	printf("Enter any Three Numbers:");
	printf("\nInput 1: ");
	scanf("%f",&input_1);
	printf("Input 2: ");
	scanf("%f",&input_2);
	printf("Input 3: ");
	scanf("%f",&input_3);
	
	if(input_1>input_2)
	{
		if(input_1>input_3)
		{
			printf("\n%.2f is Maximum of three numbers",input_1);
		}
		else
		{
			printf("\n%.2f is Maximum of three numbers",input_3);
		}
	}
	else if(input_2>input_3)
	{
		printf("\n%.2f is Maximum of three numbers",input_2);
	}
	else
	{
		printf("\n%.2f is Maximum of three numbers",input_3);
	}
	
	return 0;
}

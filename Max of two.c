//------------------------------MAX OF 2 NUMBERS-------------------------------------//

#include<stdio.h>

int main()
{
	float input_1,input_2;
	
	printf("Enter any Two Numbers: \n");
	scanf("%f%f",&input_1,&input_2);
	
	if(input_1>input_2)
	{
		printf("\n'%.2f' is Greater than '%.2f'",input_1,input_2);
	}
	else
	{
		printf("\n'%.2f' is Greater than '%.2f'",input_2,input_1);
	}
	
	return 0;
}

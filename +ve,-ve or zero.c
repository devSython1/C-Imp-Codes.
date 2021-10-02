//------------------------------+VE,-VE OR ZERO-------------------------------------//

#include<stdio.h>

int main()
{
	int user_input;
	printf("Enter any Integer Number:");
	scanf("%d",&user_input);
	
	if(user_input>0)
	{
		printf("\nEntered Number (%d) is Positive",user_input);
	}
	else if(user_input<0)
	{
		printf("\nEntered Number (%d) is Negative",user_input);
	}
	else
	{
		printf("\nEntered Number is Zero");
	}
}


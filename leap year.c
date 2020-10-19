//--------------------------------LEAP YEAR-------------------------------------//

#include<stdio.h>

int main()
{
	int user_input;
	printf("Enter Any Year: ");
	scanf("%d",&user_input);
	
	if(user_input%4 == 0)
	{
		printf("\nEntered Year is Leap Year");
	}
	else
	{
		printf("\nEntered Year is Not a Leap Year");
	}
	
	return 0;
}

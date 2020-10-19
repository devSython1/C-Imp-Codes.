//-------------------------Number of Days in a YEAR-------------------------------------//

#include<stdio.h>

int main()
{
	int user_input;
	printf("Enter any Year: ");
	scanf("%d",&user_input);
	
	if(user_input%4 == 0)
	{
		printf("Number of Days in Year %d : 366 Days",user_input);
	}
	else
	{
		printf("Number of Days in Year %d : 365 Days",user_input);
	}
	
	return 0;
}

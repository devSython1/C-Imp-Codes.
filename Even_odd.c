//---------------------------EVEN OR ODD NUMBERS--------------------------------//

#include<stdio.h>

int main()
{
	int user_input;
	printf("Enter the number: ");
	scanf("%d",&user_input);
	
	if(user_input%2 == 0)
	{
		printf("\nThe Entered Number is Even Number.");
	}
	else
	{
		printf("\nThe Entered Number is Odd Number.");
	}
	
	printf("\n\nEven Numbers Between '0' to '%d' are:",user_input);
	printf("\n");
	int even;
	for(even=0;even<=user_input;even++)
	{
		if(even%2 == 0)
		{
			printf("%d\t",even);
		}
	}
	
	printf("\n\nOdd Numbers Between '1' to '%d' are:",user_input);
	printf("\n");
	int odd;
	for(odd=1;odd<=user_input;odd++)
	{
		if(odd%2 == 1)
		{
			printf("%d\t",odd);
		}
	}
	return 0;
}


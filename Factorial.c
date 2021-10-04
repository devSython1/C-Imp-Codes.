//----------------------------- FACTORIAL -------------------------------------//

// Factorial using recursion

#include<stdio.h>

unsigned long factorial(int temp)  
{   
	if(temp == 0)
	{
		return 1;
	}
	else
	{
    	return(temp * factorial(temp-1));  
    }
}  
   
int main()  
{  
	int user_input, fact = 1;  
	unsigned long result;  
	printf("Enter a number: ");  
	scanf("%d", &user_input);   
	
	for(int i = 1 ; i <= user_input ; i++) 	  // factorial using for loop
	{
		if(user_input == 0)
		{
			printf("1");
		}
		else
		{
			fact = fact * i;
		}
	}
	
	printf("\nFactorial of %d is %lu", user_input, fact);
   
	result = factorial(user_input);  // Recursive approach
	if(user_input == 0)
	{
		printf("\nFactorial of '0' is 1");
	}
	else
	{
		printf("\nFactorial of %d is %lu", user_input, result);  
	}
	return 0;  
}  

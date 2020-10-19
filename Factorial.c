//----------------------------- FACTORIAL -------------------------------------//

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
	int user_input;  
	unsigned long result;  
	printf("Enter a number: ");  
	scanf("%d", &user_input);   
   
	result = factorial(user_input);  
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

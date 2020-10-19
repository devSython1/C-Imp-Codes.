//----------------------------STRONG NUMBER--------------------------------------//


#include<stdio.h>
 
int factorial(int n)
{
	int i,fact=1;		//fact = 1 'cuz fact of '0' is '1'
	
	for(i=1;i<=n;++i)
	{
		fact=fact*i;		//finding factorial of individual digit 
	}
	
	return fact;
}
 
int main()
{
	int user_input,sep,digit;
	int sum=0;
	
	printf("Enter a number:");
	scanf("%d",&user_input);
	
	digit=user_input;
	
	while(digit!=0)
	{
		sep = digit%10;			/*seperating the number into individual digits
								  and passing as a argument to the factorial*/	
		sum = factorial(sep) + sum;		//comparing for strong number condition
		digit = digit/10;		
	}
	
	printf("\nSUM of all individual factorial = %d",sum);	
	printf("\nEntered Number = %d",user_input);
	if(sum==user_input)
	{
		printf("\nStrong Number");
	}
	else
	{
		printf("\nNot Strong Number");
	}
	
	return 0;
}

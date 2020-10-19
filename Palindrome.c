//------------------------------PALINDROME--------------------------------------//

#include<stdio.h>

int check_palindrome(int num)
{
	static int reverse_num=0,remainder; /*static will keep value of reverse_num throughout the program,
										  it will not initialize to zero again*/
	if(num!=0)
	{
    	remainder = num%10;
    	reverse_num = reverse_num*10 + remainder;
    	check_palindrome(num/10);		//Recursion which returns num/10
	}

	return reverse_num;
}
int main()
{
	int user_input, reverse_num;

	printf("Enter a number: ");
	scanf("%d",&user_input);

	reverse_num = check_palindrome(user_input);
	printf("\nEntered Number : %d",user_input);
	printf("\nReversed Number : %d",reverse_num);
	

	if(user_input==reverse_num)
	{
		printf("\n\nEntered Number = Reversed Number \nTherefore, %d is a palindrome number",user_input);
	}
	else
	{  
		printf("\n\nEntered Number != Reversed Number \nTherefore, %d is not a palindrome number",user_input);
	}

	return 0;
}

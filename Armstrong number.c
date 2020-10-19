//----------------------------- ARMSTRONG NUMBER -------------------------------------//

#include<stdio.h>
#include<math.h>

int main()
{
	int user_input,result=0,digit,power=0;
    printf("Enter a Number: ");
    scanf("%d",&user_input);
    
	int num1,num2;
	num1 = user_input;
    num2 = user_input;
    
    while(num1)
    {
    	power = power + 1;
    	num1 = num1/10;
	}
    
	while(user_input)
    {
        digit = user_input%10;
        result += pow(digit,power);
        user_input = user_input/10;
    }
    
    printf("Sum of (raise to %d) power of each digit of the Given Number = %d",power,result);
    
	if(result == num2)
    {
    	printf("\n\n%d = %d\nTherefor Entered Number is an Armstrong",num2,result);
	}
	else
	{
	    printf("\n\n%d != %d\nTherefor Entered Number is not an Armstrong",num2,result);
	}
    
	return 0;
}

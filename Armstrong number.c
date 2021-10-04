//----------------------------- ARMSTRONG NUMBER -------------------------------------//

#include<stdio.h>
#include<math.h>

int main()
{
	int user_input,digit=0,power=0;
    printf("Enter a Number: ");
    scanf("%d",&user_input);
    
    int num1 = user_input;
    
    while(num1)
    {
	    digit = num1%10;
	    power += pow(digit,3);
	    num1 /= 10;
    }
    
    printf("Sum of (raise to %d) power of each digit of the Given Number = %d",power,result);
    
	if(power == user_input)
        {
    		printf("\n\n%d = %d\nTherefor Entered Number is an Armstrong",num2,result);
	}
	else
	{
	    	printf("\n\n%d != %d\nTherefor Entered Number is not an Armstrong",num2,result);
	}
    
	return 0;
}

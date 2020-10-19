//-------------------------------Prime Numbers----------------------------------//

#include<stdio.h>
int main()
{
	int user_input,i;
	
	printf("\nEnter the number : ");
	scanf("%d",&user_input);
	
	for(i = 2; i <= user_input/2; i++)
	{
		if(user_input % i ==0)
		{
			break;
		}
	}
	
	if(i > user_input/2)
	{
		printf("\n%d is a Prime Number\n",user_input);
	}
	else
	{
		printf("\n%d is not a Prime Number\n", user_input);
	}
	
	printf("Also, The Prime Numbers from '2' to '%d' are:",user_input);
	printf("\n");
	int prime_number,count;
	for(prime_number = 2; prime_number <= user_input; prime_number++)
    {
        count = 1;

        int i;
		for(i = 2; i < prime_number; i++)
        {
            if(prime_number % i == 0)
            {
                count = 0;            
                break;
            }
        }
    	if(count)
        {
        	printf("%d\t",prime_number);
        }   
    }
	
	return 0;
}


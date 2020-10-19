//----------------------------PRIME FACTOR--------------------------------------//

#include<stdio.h>

int main()
{
	int num, divisor; 			
 
    printf("Enter a number: ");
    scanf ("%d", &num);		
	
	printf("Prime factors: ");
    divisor = 2;

    while (num > 1)
	{
		while (num % divisor == 0)
		{
            printf("%d ", divisor);         // divisor is a factor 
			num /= divisor;                 // remove the factor from num
		}

        divisor++;
	}
	
	return 0;
}

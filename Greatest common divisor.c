//-------------------------- Greatest Common Divisor ------------------------------//

#include<stdio.h>

int main()
{
	int gcd, remainder, numerator, denominator;
 
    printf("Enter the numerator and denominator respectively numbers\n");
    scanf("%d %d", &numerator, &denominator);
    
    remainder = numerator % denominator;
    while (remainder != 0)
    {
    	numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    
    gcd = denominator;
    printf("GCD of %d and %d = %d\n", input_1, input_2, gcd);
    
    return 0;
}

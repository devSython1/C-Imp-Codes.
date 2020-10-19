//-------------------------- Greatest Common Divisor ------------------------------//

#include<stdio.h>

int main()
{
	int input_1, input_2, gcd, lcm, remainder, numerator, denominator;
 
    printf("Enter two numbers\n");
    scanf("%d %d", &input_1, &input_2);
    if (input_1 > input_2)
    {
        numerator = input_1;
        denominator = input_2;
    }
    else
    {
        numerator = input_2;
        denominator = input_1;
    }
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

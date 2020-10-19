//----------------------------- Sum of DIGITS -------------------------------------//

#include<stdio.h>

int main()
{
	int user_input,sum=0,digit;
    printf("Enter a Number: ");
    scanf("%d",&user_input);
    while(user_input)
    {
        digit=user_input%10;
        user_input=user_input/10;
        printf("+ %d ",digit);
        sum=sum+digit;
    }
    printf("\nSum of Digits of Number = %d",sum);
    return 0;
}

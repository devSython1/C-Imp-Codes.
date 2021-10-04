//----------------------------- SUM OF DIGITS -------------------------------------//

#include<stdio.h>

int main()
{
    int user_input,sum=0,digit=0;
    printf("Enter a Number: ");
    scanf("%d",&user_input);
    while(user_input)
    {
        digit=user_input%10;		//seperating each digit by taking mod
        printf("%d ",digit);
        sum=sum+digit;
	user_input=user_input/10;
    }
    printf("\nSum of Digits of Number = %d",sum);
    return 0;
}

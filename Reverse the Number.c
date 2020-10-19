//----------------------------- REVERSE THE NUMBER -------------------------------------//

#include<stdio.h>

int main()
{
	int user_input,reverse=0,digit;
    printf("Enter a Number: ");
    scanf("%d",&user_input);
    while(user_input)
    {
        digit = user_input%10;
        reverse = reverse*10 + digit;
        user_input = user_input/10;

    }
    printf("\nSum of Digits of Number = %d",reverse);
    return 0;
}

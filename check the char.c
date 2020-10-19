//------------------------------ CHECK THE CHAR -------------------------------------//

#include<stdio.h>

int main()
{
	char user_input;

    printf("Enter any character: ");
    scanf("%c", &user_input);


    if((user_input >= 'a' && user_input <= 'z') || (user_input >= 'A' && user_input <= 'Z'))
    {
        printf("'%c' is alphabet.", user_input);
    }
    else if(user_input >= '0' && user_input <= '9')
    {
        printf("'%c' is digit.", user_input);
    }
    else 
    {
        printf("'%c' is special user_inputaracter.", user_input);
    }

    return 0;
}

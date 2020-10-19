//----------------------------REVERSE STRING--------------------------------------//


#include <stdio.h>

int main()
{
	int i, j, length;
    char user_input[100];
    char reversed_string[100];
    printf("Enter a string: ");
    scanf("%s", user_input);
    printf("\nEntered string is: %s", user_input);
    for(i = 0; user_input[i] != '\0'; i++);	// '\0' is null terminator, it means the end of string 
    {
        length = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        reversed_string[j] = user_input[length];
        length--;
    }
    printf("\nThe reversed string is: %s", reversed_string);
    
	return 0;
}

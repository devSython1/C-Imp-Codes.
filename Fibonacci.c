//------------------------------- FIBONACCI -------------------------------------//

#include<stdio.h>

int main()    
{    
	int num_1=0,num_2=1,num_3,i,user_input;    
	printf("Enter the number of elements:");    
	scanf("%d",&user_input);    
	
	printf("Fibonacci series from '%d' elements:",user_input); 
	printf("\n%d  %d",num_1,num_2);    
	for(i=2;i<user_input;++i)// i=2 first two numbers are already printed    
	{    
		num_3=num_1+num_2;    
		printf("  %d",num_3);    
		num_1=num_2;    
		num_2=num_3;    
	}  
	
	return 0;  
}    

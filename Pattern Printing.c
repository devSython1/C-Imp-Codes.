//-----------------------------PATTERN PRINTING--------------------------------------//

#include<stdio.h>

//-----Pattern 1------
void pattern_1(int rows)
{
	int i,j;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<=i ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

//-----Pattern 2------
void pattern_2(int rows)
{
	int i,j;
	for(i=0 ; i<rows ; i++)
	{
		for(j=rows-1 ; j>=i ; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}

//-----Pattern 3------
void pattern_3(int rows)
{
	int i,j,k;
	for(i=0 ; i<rows ; i++)
	{
		for(j=rows-1 ; j>=i ; j--)
		{
			printf(" ");
		}
		for(k=0 ; k<=i ; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

//-----Pattern 4------
void pattern_4(int rows)
{
	int i,j,k;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<=i ; j++)
		{
			printf(" ");
		}
		for(k=rows-1 ; k>=i ; k--)
		{
			printf("* ");
		}
		printf("\n");
	}
}

//-----Pattern 5------
void pattern_5(int rows)
{
	int i,j,k;
	
	for(i=0 ; i<rows ; i++)
	{
		for(j=rows-1 ; j>=i ; j--)
		{
			printf(" ");
		}
		for(k=0 ; k<=i ; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<=i ; j++)
		{
			printf(" ");
		}
		for(k=rows-1 ; k>i ; k--)
		{
			printf(" *");
		}
		printf("\n");
	}
}

//-----Pattern 6------
void pattern_6(int rows)
{
	int i,j,k;
	for (i=1; i<=rows; i++)
	{
    	for (j=1; j<=rows-i;j++)
		{
        	printf(" ");
    	}
    	for (k=1; k<=rows; k++)
		{
        	printf(" *");
    	}
    	printf("\n");
	}
}

//-----Pattern 7------
void pattern_7(int rows)
{
	int i,j,k;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<rows ; j++)
		{
			if(i==0 || i==rows-1 || j==0 || j==rows-1)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

//-----Pattern 8------
void pattern_8(int rows)
{
	int i,j,k;
	for(i=0 ; i<rows ; i++)
	{
		for(j=rows-1 ; j>=i ; j--)
		{
			printf(" ");
		}
		for(k=0 ; k<=i ; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<rows ; j++)
		{
			if(i==rows-1 || j==0 || j==rows-1)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int rows,column,user_input;
	printf("Enter number of Rows: ");
	scanf("%d",&user_input);

	printf("\nPattern 1:\n");
	pattern_1(user_input);
	printf("\nPattern 2:\n");
	pattern_2(user_input);
	printf("\nPattern 3:\n");
	pattern_3(user_input);
	printf("\nPattern 4:\n");
	pattern_4(user_input);
	printf("\nPattern 5:\n");
	pattern_5(user_input);
	printf("\nPattern 6:\n");
	pattern_6(user_input);
	printf("\nPattern 7:\n");
	pattern_7(user_input);
	printf("\nPattern 8:\n");
	pattern_8(user_input);
	
	return 0;
}


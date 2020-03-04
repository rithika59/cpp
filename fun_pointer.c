/*Assignment 1 ----- Write a menu driven program with the following menu options:
	1. Add two numbers
	2. Multiply two numbers.
	3. Find max of three numbers.
	4. Find min of three numbers.
	5. Exit.
Implement a function for performing each operation. */


#include<stdio.h>
#include<stdlib.h>

	void add()
	{
		int i;
		int sum = 0;
		int *p = NULL;
		
		p = (int*)malloc(2*sizeof(int));
		if(p==NULL)
		{
			printf("Insufficient memory");
		}

		printf("Function to add two numbers\n");
		
		for(i=0;i<2;i++)
		{
			printf("Enter %d number\n",i+1);
			scanf("%d",(p+i));
			sum = sum + *(p+i);
		}
		printf("The sum of given numbers is : %d \n",sum);
		free(p);
	}
	
	void mul()
	{
		int i;
		int product = 1;
		int *p = NULL;
		
		p = (int*)malloc(2*sizeof(int));
	
		if(p==NULL)
		{
			printf("Insufficient memory");
		}

		printf("Function to multiply two numbers\n");
		
		for(i=0;i<2;i++)
		{
			printf("Enter %d number\n",i+1);
			scanf("%d",(p+i));
			product = product * (*(p+i));
		}
		printf("The product of given numbers is %d \n",product);
		
		free(p);
	}
	
	void min()
	{
		int i;
		int min = 0;
		int *p = NULL;
		
		p = (int*)malloc(3*sizeof(int));
		
		if(p==NULL)
		{
			printf("Insufficient memory");
		}
		printf("Function to find min of three numbers\n");
		
		for(i=0;i<3;i++)
		{
			printf("Enter %d number\n",i+1);
			scanf("%d",(p+i));
			
			if(i==0)
			{
				min = *(p+i);
			}
			
			if(*(p+i)<min)
			{
				min = *(p+i);
			}
		}

		printf("Minimum of given numbers is %d \n", min);

		free(p);
	}
	
	void max() {
		int i;
		int max = 0;
		int *p = NULL;
		
		p = (int*)malloc(3*sizeof(int));
		
		if(p==NULL)
		{
			printf("Insufficient memory");
		}

		printf("Function to find max of three numbers\n");
		
		for(i=0;i<3;i++)
		{
			printf("Enter %d number\n",i+1);
			scanf("%d",(p+i));

			if(i==0)
			{
				max = *(p+i);
			}
			
			if(*(p+i)>max)
			{
				max = *(p+i);
			}
		}
		printf("Maximum of the given numbers is : %d \n", max);
		free(p);
	}

	void ext()
	{
		exit(0);
	}
	
int main()
{
	void (*pfn[5])() = {add, mul, max, min, ext};
	int i;
	printf("Enter the function number to execute :\n");
	scanf("%d",&i);

	if(i<5)
	{
		(*pfn[i-1])();
		}
	else
	{
		printf("Function doesnt exist for the given menu option.");
	}
}


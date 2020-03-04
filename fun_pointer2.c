/*Assignment 2 ---- Modify assignment1 as a different source file, as follows:
	Each functions should be passed the numbers as arguments and result should be returned back by the function. */

#include<stdio.h>
#include<stdlib.h>

	int add(int arr[], int num)
	{
		int sum=0,i;
		printf("Function to find sum of given numbers\n");
		for(i=0 ; i <num; i++)
		{
			sum += arr[i];
		}
	
		return sum;
	
	}
	
	int mul(int arr[], int num)
	{
		int prod = 1,i;
		printf("Function to find product of given numbers\n");
		for( i=0; i < num; i++)
		{
			prod *= arr[i];
		}
		
		return  prod;
	}
	
	int min(int arr[], int num) 
	{
		
		int i;
		int min = arr[0];
		printf("Function to find min of given numbers\n");
		for(i=0;i<num;i++)
		{
			if(arr[i]<min)
			{
				min = arr[i];
				}
		}
		return min;
	}
	
	int max(int arr[], int num) 
	{
		
		int i;
		int max = arr[0];
		printf("Function to find max of given numbers\n");
		for(i=0;i<num;i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];
				}
		}
		return max;
	}
	
	
int main()
{
	int i=0,j,p,N;
	int (*pfn[4])(int*,int) = {add, mul, max, min};
	
	printf("Enter the function number to execute :\n");
	scanf("%d",&i);

	

	if(i<5)
	{
		printf("Enter the length of input array :\n");
		scanf("%d",&N);

		int arr[N];
		for(j=0;j<N;j++)
		{
			printf("Enter %d element\n",j+1);
			scanf("%d",&p);
			arr[j] = p;
		}
		
		int res = (*pfn[i - 1])(arr , N);
		printf("Result is %d \n",res);
	}
	else
	{
		printf("Function doesnt exist for the given menu option.");
	}
}

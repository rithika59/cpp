#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N=0,i,max=0,min=0;
	int *p=NULL;
	printf("Enter length of array :\n ");
	scanf("%d",&N);
	p = (int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",(p+i));
		if(i==0){
			min = *(p+i);
			max = *(p+i);
			}
		if(*(p+i)>max){
			max = *(p+i);
			}	
		if(*(p+i)<min){
			min = *(p+i);
			}	
			
	}

	printf("Array elements are :\n");
	for(i=0;i<N;i++){
		printf(" %d ",*(p+i));
		}
	printf("\nMax is : %d", max);
	printf("\nMin is : %d\n", min);
	
	free(p);
	return 0;

}

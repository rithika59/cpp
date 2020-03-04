#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,M=0,N=0;
	char **q = NULL;
	char word[1024];
	int len_word;
	printf("enter number of strings\n");
	scanf("%d",&N);


	q = (char **)malloc(N*sizeof(char *));

	for(i=0;i<N;i++)
	{
		printf("enter %d  string\n",i+1 );
		scanf("%s",word);
		M = strlen(word);
	//	printf("length of the string is %d \n",M);
		*(q+i)=(char *)malloc((M+1)*sizeof(char));
		for(j=0;j<(M+1);j++)
		{
			*(*(q+i)+j) = word[j];
			}
		}

	for( i =0; i < N; i++)
	{
		printf("%d string entered is : %s \t",i+1,*(q+i));
	//	*midword = (q+i);
		len_word = strlen(*(q+i));
		printf("length of string : %d \t",len_word);

		if((len_word%2)== 0)
			printf("middle character of string is : %c \n",*(*(q+i)+(len_word/2)-1));
		else
			printf("middle character of string is : %c \n",*(*(q+i)+((len_word-1)/2)));
	 }
	
	 free(**q);

		return 0;
}


























/*	char str[1000];
	char *p = NULL;
	char *q = NULL;
	
	printf("enter number of strings\n");
	scanf("%d",&N);
	char strs[N][];
	for(j=0;j<N;j++){
	

	printf("enter a string\n" );
	scanf("%s",str);
	strs[j] = str;
	len = strlen(str);
	printf("length of string : %d",len);

	p = (char*)malloc(len*sizeof(char));

	for(i=0;i<len;i++)
	{
		*(p+i) = str[i];
		}
	
	printf("first char :%s",p);
	printf("second char : %s", (p+1));
	
	if(len%2 == 0)
	{
		printf("middle char : %s",(p+(len/2)));
		}
	else
	{
		printf("middle char : %s", (p+((len-1)/2)));
	}
	q = (char*)malloc(1*sizeof(char));
	if(len%2 == 0){
		*q = str[len/2];
		}
	else
	{
		*q = str[(len-1)/2];
		}	
	printf("middle char : %s", q);
	}
	printf("%s", strs);
	return 0;
	}
*/

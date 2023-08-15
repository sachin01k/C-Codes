/* Q. Write a C Program to Calculate sum of left diagonal of the Matrix array.
*/

//Solution


#include<stdio.h>

void accept(int a[10][10], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Enter the Element arr[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}		
	}
}

void display(int a[10][10], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");		
	}

}

void sum(int a[10][10], int n)
{
	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			/* 1. In Case of left diagonal its 
				  simple if  i == j then add 
				  value at row i and column j
				  in sum.
			*/

			if(i == j) 
				sum += a[i][j];
		}
	}

	printf("Sum of left Diagonal of Matrix : %d\n", sum);
}

int main(int argc, char const *argv[])
{
	int a[10][10];
	int n = 0;

	printf("Sum of left Diagonal in Matrix\n");
	printf("Enter the number of Element to be Stored : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Matrix Array\n");
	display(a,n);

	printf("OUTPUT\n");
	sum(a, n);

	return 0;
}

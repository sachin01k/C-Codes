/* Q. Write a C Program to Calculate sum of right diagonal of the Matrix array.
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
		for(int j = 0; j < n; j++)
		{
			/* 1. when you add i and j we get 
				  position of right diagonals.
			   
			   2. then check it with size of
			   	  array if it i + j == size -1
			   	  then add the value of matrix
			   	  at i and  j in sum.
			*/

			if(i + j == (n-1)) 
				sum += a[i][j];
		}
	}

	printf("Sum of Right Diagonal of Matrix : %d\n", sum);
}

int main(int argc, char const *argv[])
{
	int a[10][10];
	int n = 0;

	printf("Sum of Right Diagonal in Matrix\n");
	printf("Enter the number of Element to be Stored : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Matrix Array\n");
	display(a,n);

	printf("OUTPUT\n");
	sum(a, n);

	return 0;
}

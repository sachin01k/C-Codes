/* Q. Write a C Program to Transpose the Matrix array.
	
	INPUT 	------->   OUTPUT 

	1 2 3              1 4 7
	4 5 6              2 5 8
	7 8 9			         3 6 9
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
void transpose(int a[10][10], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp; 
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[10][10];
	int n = 0;

	printf("Transpose Matrix Array\n");
	printf("Enter the number of Element to be Stored : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Matrix Array\n");
	display(a,n);

	printf("OUTPUT\n");
	transpose(a, n);
	display(a,n);

	return 0;
}

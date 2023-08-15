/* Q. Write a C Program to display upper / lower triangular matrix .
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

void upper_triangular_matrix(int a[10][10], int n)
{

	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			a[i][j] = 0;
		}
	}

	printf("Upper Triangular Matrix\n");
	display(a,n);

}

void lower_triangular_matrix(int a[10][10], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			a[i][j] = 0;
		}
	}

	printf("Lower Triangular Matrix\n");
	display(a,n);
}


int main(int argc, char const *argv[])
{
	int a[10][10];
	int n = 0;
	int choice = 0;

	printf("Upper / Lower Triangular Matrix\n");
	printf("Enter the number of Element to be Stored : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Matrix Array\n");
	display(a,n);

	printf("OUTPUT\n");
	printf("1.Upper Triangular Matrix\n");
	printf("2.Lower Triangular Matrix\n");
	printf("Choose Option : ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1 : upper_triangular_matrix(a, n);
				 break;

		case 2 : lower_triangular_matrix(a,n);
				 break;

		default : printf("Invalid Option");

	}

	return 0;	
}

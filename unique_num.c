//Q.Write a C Program to count duplicate values in an array.

#include<stdio.h>

void accept(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Enter Element : ");
		scanf("%d", &a[i]);
	}
}

void display(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void unique_num(int a[], int n)
{
	                         // Declaring Extra Array to store unique numbers
	int i = 0, j = 0;

	printf("\nUnique Numbers in Array : ");

	for(i = 0; i < n-1 ; i++)
	{
		int flag = 0;

		for(j = i + 1; j < n && a[i] != -1; j++)
		{
			if(a[i] == a[j])
			{
				a[j] = -1;
				flag = 1;
				break;
			}
		}

		if(flag == 0 && a[i] != -1)
		{
			printf("%d ", a[i]);
		}
	}
	
	if(a[i] != -1)
		printf("%d ", a[i]);
		
}

int main(int argc, char const *argv[])
{
	int a[50];
	int n = 0;

	printf("Unique Numbers in Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array : ");
	display(a,n);

	unique_num(a,n);// Call function

	return 0;
}

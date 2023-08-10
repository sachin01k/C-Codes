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

void count(int a[], int n)
{
	int count = 0;

	for(int i = 0; i < n-1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				a[j] = -1;
				count++;
				break;
			}
		}
	}

	printf("\nNo. of Duplicate's : %d", count);
}

int main(int argc, char const *argv[])
{
	int a[50];
	int n = 0;

	printf("Count Duplicate Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array : ");
	display(a,n);

	count(a,n);

	return 0;
}
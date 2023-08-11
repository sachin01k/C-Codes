//Q.Write a C Program to count Frequency of each element in array.

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

	printf("\n");
}

int frequency(int a[], int n, int key)
{
	int count = 0;

	for(int i = 0; i < n ; i++)
	{
		if(key == a[i])
		{
			count++;
			a[i] = -1;
		}
	}

	return count;
}



int main(int argc, char const *argv[])
{
	int a[50];
	int n = 0;

	printf("Count Frequency of Each Element in Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("OUTPUT\n");
	for(int i = 0; i < n; i++)
	{
		int key = a[i];

		if(a[i] == -1)
		{
			continue;
		}	
		printf("%d occurs %d Times in Array\n", key, frequency(a, n, a[i]));;// Call function	
	}	

	return 0;
}

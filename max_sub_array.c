QQ//Q.Write a C Program to find contigious subarray and returm largest sum.

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

int max_sub_array(int a[], int n)
{
	// if array has positive and negative numbers
	// Using Kadane's Algorithm

	int max_sum = 0;
	int max_so_far = 0;

	for(int i = 0; i < n; i++)
	{
		max_sum = max_sum + a[i];

		if(max_sum < 0)
		{
			max_sum = 0;
		}
		else if(max_so_far < max_sum)
		{
			max_so_far = max_sum;
		}
	}

	return max_so_far;
}

int main(int argc, char const *argv[])
{
	int a[50];
	int n = 0;

	printf("Largest sum of Contigious Sub-Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("OUTPUT\n");
	
	int sum = max_sub_array(a, n);

	printf("%d is the largest Sum of Contigious Sub-Array\n",sum);

	return 0;
}
